// Fill out your copyright notice in the Description page of Project Settings.


#include "./PointCloudWebSocketClient.h"
#include "Engine/Engine.h"
#include "Async/Async.h"

// Sets default values
APointCloudWebSocketClient::APointCloudWebSocketClient()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	bReceivingGLB = false;
	ExpectedFileSize = 0;
}

void APointCloudWebSocketClient::BeginPlay()
{
	Super::BeginPlay();
	ConnectToServer();
}

void APointCloudWebSocketClient::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	DisconnectFromServer();
	Super::EndPlay(EndPlayReason);
}

void APointCloudWebSocketClient::OnWebSocketBinaryData(const void* Data, SIZE_T Size, SIZE_T BytesRemaining)
{
	int32 CurrentSize = InComingBinaryBuffer.Num();
	InComingBinaryBuffer.AddUninitialized(Size);

	FMemory::Memcpy(InComingBinaryBuffer.GetData() + CurrentSize, Data, Size);

	if (BytesRemaining == 0)
	{
		AsyncTask(ENamedThreads::GameThread, [this, BinaryData = InComingBinaryBuffer]()
			{
				//CreatePointCloudFromBinaryData(BinaryData);
			});
		InComingBinaryBuffer.Empty();
	}
}

void APointCloudWebSocketClient::OnWebSocketMessage(const FString& Message)
{
	UE_LOG(LogTemp, Warning, TEXT("Mensaje recibido: %s"), *Message);
	TSharedPtr<FJsonObject> JsonObject;
    TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Message);

	if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid()) {
		FString Type = JsonObject->GetStringField("type");
		if (Type == "glb_start") {
			ProcessGLBMessage(JsonObject);
		}
		else if (Type == "glb_chunk") {
			FString EncodedData = JsonObject->GetStringField("data");
			int32 ChunkIndex = JsonObject->GetIntegerField("chunk_index");
			int32 TotalSent = JsonObject->GetIntegerField("total_sent");
			int32 TotalSize = JsonObject->GetIntegerField("total_size");

			ProcessGLBChunk(EncodedData, ChunkIndex, TotalSent, TotalSize);
		}
		else if (Type == "error")
		{
			FString ErrorMessage = JsonObject->GetStringField("message");
			UE_LOG(LogTemp, Error, TEXT("Error del servidor: %s"), *ErrorMessage);
		}
		else if (Type == "ack")
		{
			UE_LOG(LogTemp, Log, TEXT("ACK recibido del servidor"));
		}
		else if (Type == "pong")
		{
			UE_LOG(LogTemp, Verbose, TEXT("Pong recibido"));
		}
		else {
			if (Message == "ACK") {
				UE_LOG(LogTemp, Log, TEXT("ACK recibido del servidor"));
			}
		}
	}
}


void APointCloudWebSocketClient::OnWebSocketConnected()
{
	UE_LOG(LogTemp, Warning, TEXT("WebSocket conectado al servidor"));
	WebSocket->Send("READY");
}

void APointCloudWebSocketClient::OnWebSocketConectionError(const FString& Error)
{
	UE_LOG(LogTemp, Error, TEXT("WebSocket Error: %s"), *Error);
}

void APointCloudWebSocketClient::OnWebSocketClosed(int32 StatusCode, const FString& Reason, bool bWasClean)
{
	UE_LOG(LogTemp, Error, TEXT("WebSocket  closed: %d - %s"), StatusCode, *Reason);
}

// Called every frame
void APointCloudWebSocketClient::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void APointCloudWebSocketClient::ConnectToServer(const FString& ServerUrl)
{
	if (!FModuleManager::Get().IsModuleLoaded("WebSockets")) {
		FModuleManager::Get().LoadModule("WebSockets");
	}
	WebSocket = FWebSocketsModule::Get().CreateWebSocket(ServerUrl);
	WebSocket->OnConnected().AddUObject(this, &APointCloudWebSocketClient::OnWebSocketConnected);
	WebSocket->OnConnectionError().AddUObject(this, &APointCloudWebSocketClient::OnWebSocketConectionError);
	WebSocket->OnClosed().AddUObject(this, &APointCloudWebSocketClient::OnWebSocketClosed);
	WebSocket->OnMessage().AddUObject(this, &APointCloudWebSocketClient::OnWebSocketMessage);
	WebSocket->OnRawMessage().AddUObject(this, &APointCloudWebSocketClient::OnWebSocketBinaryData);
	WebSocket->Connect();

	UE_LOG(LogTemp, Warning, TEXT("Conectando a WebSocket interesante: %s"), *ServerUrl);
}

void APointCloudWebSocketClient::DisconnectFromServer()
{
	if (WebSocket->IsConnected()) {
		WebSocket->Close();
	}
}


void APointCloudWebSocketClient::ProcessGLBMessage(const TSharedPtr<FJsonObject>& JsonObject)
{
	CurrentFilename = JsonObject->GetStringField("filename");
	ExpectedFileSize = JsonObject->GetIntegerField("file_size");
	int32 ChunkSize = JsonObject->GetIntegerField("chunk_size");

	bReceivingGLB = true;
	GLBFileBuffer.Empty();
	GLBFileBuffer.Reserve(ExpectedFileSize);

	UE_LOG(LogTemp, Log, TEXT("Recibiendo archivo GLB: %s (%d bytes, chunk: %d)"),
		*CurrentFilename, ExpectedFileSize, ChunkSize);

}

void APointCloudWebSocketClient::ProcessGLBChunk(const FString& EncodedData, int32 ChunkIndex, int32 TotalSent, int32 TotalSize)
{
	if (!bReceivingGLB)
	{
		UE_LOG(LogTemp, Warning, TEXT("Recibido chunk sin inicio de archivo"));
		return;
	}

	TArray<uint8> DecodedData;
	if (!FBase64::Decode(EncodedData, DecodedData))
	{
		UE_LOG(LogTemp, Error, TEXT("Error decodificando chunk %d"), ChunkIndex);
		return;
	}
	GLBFileBuffer.Append(DecodedData);

	float Progress = (TotalSent / (float)TotalSize) * 100.0f;
	OnReceiveProgress(TotalSent, TotalSize);

	if (ChunkIndex % 10 == 0)
	{
		UE_LOG(LogTemp, Log, TEXT("Progreso GLB: %.1f%% (%d/%d bytes)"),
			Progress, TotalSent, TotalSize);
	}
}

void APointCloudWebSocketClient::FinalizeGLBFile()
{
	if (!bReceivingGLB || GLBFileBuffer.Num() == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("No hay datos GLB para finalizar"));
		return;
	}

	UE_LOG(LogTemp, Log, TEXT("Archivo GLB recibido: %s (%d bytes)"),
		*CurrentFilename, GLBFileBuffer.Num());

	FString TempPath = FPaths::ProjectSavedDir() / TEXT("GLB") / CurrentFilename;

	if (SaveGLBToFile(TempPath, GLBFileBuffer))
	{
		UE_LOG(LogTemp, Log, TEXT("Archivo GLB guardado: %s"), *TempPath);

		OnGLBFileReceived(TempPath);

		// Aquí puedes cargar el GLB en Unreal
		// Nota: Necesitas un plugin como "Runtime Mesh Loader" o "GLTF Loader"
		// Para cargar el GLB en el motor

		// Ejemplo de carga con Runtime Mesh Loader (si lo tienes)
		// LoadGLBIntoScene(TempPath);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Error guardando archivo GLB: %s"), *TempPath);
	}

	GLBFileBuffer.Empty();
	bReceivingGLB = false;
	CurrentFilename = TEXT("");
	ExpectedFileSize = 0;
}
bool APointCloudWebSocketClient::SaveGLBToFile(const FString& FilePath, const TArray<uint8>& Data)
{
	FString Directory = FPaths::GetPath(FilePath);
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
	if (!PlatformFile.DirectoryExists(*Directory))
	{
		PlatformFile.CreateDirectoryTree(*Directory);
	}

	return FFileHelper::SaveArrayToFile(Data, *FilePath);
}

void APointCloudWebSocketClient::OnGLBFileReceived(const FString& FilePath)
{
	UE_LOG(LogTemp, Log, TEXT("GLB recibido: %s - Cargar en escena"), *FilePath)
}

void APointCloudWebSocketClient::RequestGLBFile(const FString& Filename)
{
	if (!WebSocket.IsValid() || !WebSocket->IsConnected())
	{
		UE_LOG(LogTemp, Error, TEXT("WebSocket no conectado"));
		return;
	}

	TSharedPtr<FJsonObject> RequestJson = MakeShareable(new FJsonObject);
	RequestJson->SetStringField("type", "request_glb");
	RequestJson->SetStringField("filename", Filename);

	FString RequestString;
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&RequestString);
	FJsonSerializer::Serialize(RequestJson.ToSharedRef(), Writer);

	WebSocket->Send(RequestString);
	UE_LOG(LogTemp, Log, TEXT("Solicitando archivo GLB: %s"), *Filename);
}