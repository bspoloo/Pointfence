// Fill out your copyright notice in the Description page of Project Settings.

#include "PointCloudWebSocketClient.h"

#include "Async/Async.h"
#include "Engine/World.h"
#include "Modules/ModuleManager.h"
#include "Kismet/GameplayStatics.h"
#include "Blueprint/UserWidget.h"
#include "../Widgets/UConnectionStatusWidget.h"
#include "../ItemsGLB/GLBModelActor.h"

APointCloudWebSocketClient::APointCloudWebSocketClient()
{
	PrimaryActorTick.bCanEverTick = false;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Game/Teleporter/teleporter1_Cylinder_054.teleporter1_Cylinder_054"));

	if (MeshAsset.Succeeded()) {
		MeshComponent->SetStaticMesh(MeshAsset.Object);
	}
	static ConstructorHelpers::FObjectFinder<UNiagaraSystem> ParticleAsset(TEXT("/Game/PortalSystem/FX/NS_Portal_02.NS_Portal_02"));
	if (ParticleAsset.Succeeded())
	{
		PressParticle = ParticleAsset.Object;
	}
}


void APointCloudWebSocketClient::BeginPlay()
{
	Super::BeginPlay();
	InitializeConnectionStatusWidget();
	ConnectToServer();
}


void APointCloudWebSocketClient::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	DisconnectFromServer();
	Super::EndPlay(EndPlayReason);
}


void APointCloudWebSocketClient::ConnectToServer(const FString& ServerUrl)
{
	if (WebSocket.IsValid() && WebSocket->IsConnected())
	{
		UE_LOG(LogTemp, Warning, TEXT("WebSocket ya está conectado."));
		ShowConnectionWarning();
		return;
	}

	if (!FModuleManager::Get().IsModuleLoaded(TEXT("WebSockets")))
	{
		FModuleManager::Get().LoadModule(TEXT("WebSockets"));
	}

	WebSocket = FWebSocketsModule::Get().CreateWebSocket(ServerUrl);

	if (!WebSocket.IsValid())
	{
		UE_LOG(LogTemp, Error, TEXT("No se pudo crear el WebSocket."));
		ShowConnectionError();
		return;
	}

	WebSocket->OnConnected().AddUObject(this, &APointCloudWebSocketClient::OnWebSocketConnected);
	WebSocket->OnConnectionError().AddUObject(this, &APointCloudWebSocketClient::OnWebSocketConectionError);
	WebSocket->OnClosed().AddUObject(this, &APointCloudWebSocketClient::OnWebSocketClosed);
	WebSocket->OnMessage().AddUObject(this, &APointCloudWebSocketClient::OnWebSocketMessage);
	WebSocket->OnRawMessage().AddUObject(this, &APointCloudWebSocketClient::OnWebSocketBinaryData);

	UE_LOG(LogTemp, Warning, TEXT("Conectando a WebSocket: %s"), *ServerUrl);
	WebSocket->Connect();
	this->ShowConnecting();
}


void APointCloudWebSocketClient::DisconnectFromServer()
{
	if (WebSocket.IsValid())
	{
		if (WebSocket->IsConnected())
		{
			WebSocket->Close();
		}

		WebSocket.Reset();
	}

	InComingBinaryBuffer.Empty();
}

void APointCloudWebSocketClient::StartReconstructionEffect()
{
	if (!PressParticle)
	{
		UE_LOG(LogTemp, Error, TEXT("No hay un Niagara System asignado."));
		return;
	}

	if (!GetWorld())
		return;

	if (ParticleComponent)
	{
		ParticleComponent->DestroyComponent();
		ParticleComponent = nullptr;
	}

	FVector Location = GetActorLocation() + FVector(0.f, 0.f, 200.f);
	FRotator Rotation = GetActorRotation();

	ParticleComponent = UNiagaraFunctionLibrary::SpawnSystemAtLocation(
		GetWorld(),
		PressParticle,
		Location,
		Rotation
	);

	if (ParticleComponent)
	{
		ParticleComponent->SetAutoDestroy(false);
	}
}

void APointCloudWebSocketClient::StopReconstructionEffect()
{
	if (ParticleComponent)
	{
		ParticleComponent->Deactivate();
		ParticleComponent->DestroyComponent();
		ParticleComponent = nullptr;
	}
}

void APointCloudWebSocketClient::InitializeConnectionStatusWidget()
{
	if (!ConnectionStatusWidgetClass || !GetWorld())
	{
		UE_LOG(LogTemp,Warning,TEXT("No se ha asignado ConnectionStatusWidgetClass.")
		);
		return;
	}

	APlayerController* PC =GetWorld()->GetFirstPlayerController();

	if (!PC)
	{	
		UE_LOG(LogTemp, Warning, TEXT("No hay PlayerController."));
		return;
	}

	ConnectionStatusWidget =CreateWidget<UUConnectionStatusWidget>(PC,ConnectionStatusWidgetClass);

	if (ConnectionStatusWidget)
	{
		ConnectionStatusWidget->AddToViewport();
	}
}

void APointCloudWebSocketClient::ShowConnectionConnected()
{
	if (ConnectionStatusWidget)
	{
		ConnectionStatusWidget->ShowConnected();
	}
}

void APointCloudWebSocketClient::ShowConnectionError()
{
	if (ConnectionStatusWidget)
	{
		ConnectionStatusWidget->ShowError();
	}
}

void APointCloudWebSocketClient::ShowConnectionWarning()
{
	if (ConnectionStatusWidget)
	{
		ConnectionStatusWidget->ShowWarning();
	}
}

void APointCloudWebSocketClient::ShowConnecting()
{
	if (ConnectionStatusWidget)
	{
		ConnectionStatusWidget->ShowConnecting();
	}
}


void APointCloudWebSocketClient::OnWebSocketConnected()
{
	UE_LOG(LogTemp, Warning, TEXT("WebSocket conectado al servidor."));
	ShowConnectionConnected();
	if (WebSocket.IsValid() && WebSocket->IsConnected())
	{
		WebSocket->Send(TEXT("READY"));
	}
}


void APointCloudWebSocketClient::OnWebSocketConectionError(const FString& Error)
{
	ShowConnectionError();
	UE_LOG(LogTemp, Error, TEXT("WebSocket Error: %s"), *Error);
}


void APointCloudWebSocketClient::OnWebSocketClosed(int32 StatusCode, const FString& Reason, bool bWasClean)
{
	UE_LOG(LogTemp, Warning, TEXT("WebSocket cerrado. Código: %d | Razón: %s | Clean: %s"), StatusCode, *Reason, bWasClean ? TEXT("true") : TEXT("false"));
	ShowConnectionWarning();
}


void APointCloudWebSocketClient::OnWebSocketMessage(const FString& Message)
{
	UE_LOG(LogTemp, Log, TEXT("Mensaje WebSocket recibido: %s"), *Message);

	if (Message == TEXT("ACK"))
	{
		UE_LOG(LogTemp, Log, TEXT("ACK recibido del servidor."));
		return;
	}

	if (Message == TEXT("READY"))
	{
		UE_LOG(LogTemp, Log, TEXT("READY recibido del servidor."));
		return;
	}

	TSharedPtr<FJsonObject> JsonObject;
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Message);

	if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
	{
		FString Type;

		if (JsonObject->TryGetStringField(TEXT("type"), Type))
		{
			if (Type == TEXT("error"))
			{
				FString ErrorMessage;

				if (JsonObject->TryGetStringField(TEXT("message"), ErrorMessage))
				{
					UE_LOG(LogTemp, Error, TEXT("Error del servidor: %s"), *ErrorMessage);
				}
			}
			else if (Type == TEXT("ack"))
			{
				UE_LOG(LogTemp, Log, TEXT("ACK recibido del servidor.")
				);
			}
			else if (Type == TEXT("pong"))
			{
				UE_LOG(LogTemp, Verbose, TEXT("Pong recibido."));
			}
		}
	}
}

void APointCloudWebSocketClient::OnWebSocketBinaryData(const void* Data, SIZE_T Size, SIZE_T BytesRemaining)
{
	if (Data == nullptr || Size == 0)
	{
		return;
	}

	const int32 CurrentSize = InComingBinaryBuffer.Num();

	InComingBinaryBuffer.AddUninitialized(Size);

	FMemory::Memcpy(InComingBinaryBuffer.GetData() + CurrentSize, Data, Size);

	if (BytesRemaining == 0)
	{
		TArray<uint8> CompleteBinaryData;

		CompleteBinaryData = MoveTemp(InComingBinaryBuffer);

		InComingBinaryBuffer.Empty();

		AsyncTask(ENamedThreads::GameThread, [this, CompleteBinaryData = MoveTemp(CompleteBinaryData)]()
			{
				ProcessMeshBinaryData(CompleteBinaryData);
			}
		);
	}
}


void APointCloudWebSocketClient::ProcessMeshBinaryData(
	const TArray<uint8>& BinaryData
)
{
	/*
	 * Formato enviado por Python:
	 *
	 * HEADER:
	 * uint32 num_vertices
	 * uint32 num_faces
	 *
	 * DATA:
	 * vertices:
	 *   num_vertices * FVector(float,float,float)
	 *
	 * normals:
	 *   num_vertices * FVector(float,float,float)
	 *
	 * faces:
	 *   num_faces * 3 * uint32
	 */
	const int64 HeaderSize = 8;

	if (BinaryData.Num() < HeaderSize)
	{
		UE_LOG(LogTemp, Error, TEXT("Datos binarios insuficientes para leer el header."));
		return;
	}

	this->StartReconstructionEffect();

	int64 Offset = 0;

	uint32 NumVertices = 0;
	uint32 NumFaces = 0;

	FMemory::Memcpy(&NumVertices, BinaryData.GetData() + Offset, sizeof(uint32));

	Offset += sizeof(uint32);

	FMemory::Memcpy(&NumFaces, BinaryData.GetData() + Offset, sizeof(uint32));

	Offset += sizeof(uint32);

	UE_LOG(LogTemp, Warning, TEXT("Mesh recibido: %u vertices | %u caras"), NumVertices, NumFaces);


	if (NumVertices == 0 || NumFaces == 0)
	{
		UE_LOG(LogTemp, Error, TEXT("El mesh recibido no contiene geometría."));
		return;
	}

	const int64 VertexDataSize = static_cast<int64>(NumVertices) * 3 * sizeof(float);
	const int64 NormalDataSize = static_cast<int64>(NumVertices) * 3 * sizeof(float);
	const int64 IndexDataSize = static_cast<int64>(NumFaces) * 3 * sizeof(uint32);
	const int64 ExpectedSize = HeaderSize + VertexDataSize + NormalDataSize + IndexDataSize;

	if (BinaryData.Num() < ExpectedSize)
	{
		UE_LOG(LogTemp, Error, TEXT("Mesh incompleto. Recibidos: %d bytes | Esperados: %lld bytes"), BinaryData.Num(), ExpectedSize);
		return;
	}

	TArray<FVector> Vertices;
	TArray<FVector> Normals;
	TArray<int32> Triangles;

	Vertices.SetNumUninitialized(NumVertices);
	Normals.SetNumUninitialized(NumVertices);
	Triangles.SetNumUninitialized(NumFaces * 3);


	for (uint32 i = 0; i < NumVertices; ++i)
	{
		float X;
		float Y;
		float Z;

		FMemory::Memcpy(&X, BinaryData.GetData() + Offset, sizeof(float));
		Offset += sizeof(float);

		FMemory::Memcpy(&Y, BinaryData.GetData() + Offset, sizeof(float));

		Offset += sizeof(float);

		FMemory::Memcpy(&Z, BinaryData.GetData() + Offset, sizeof(float));

		Offset += sizeof(float);
		Vertices[i] = FVector(X, Y, Z);
	}


	for (uint32 i = 0; i < NumVertices; ++i)
	{
		float X;
		float Y;
		float Z;

		FMemory::Memcpy(&X, BinaryData.GetData() + Offset, sizeof(float));

		Offset += sizeof(float);

		FMemory::Memcpy(&Y, BinaryData.GetData() + Offset, sizeof(float));

		Offset += sizeof(float);

		FMemory::Memcpy(
			&Z,
			BinaryData.GetData() + Offset,
			sizeof(float)
		);

		Offset += sizeof(float);

		Normals[i] = FVector(X, Y, Z);
	}

	for (uint32 i = 0; i < NumFaces * 3; ++i)
	{
		uint32 Index;

		FMemory::Memcpy(&Index, BinaryData.GetData() + Offset, sizeof(uint32));

		Offset += sizeof(uint32);

		if (Index >= NumVertices)
		{
			UE_LOG(LogTemp, Error, TEXT("Índice inválido: %u. Número de vertices: %u"), Index, NumVertices);
			return;
		}

		Triangles[i] = static_cast<int32>(Index);
	}

	UE_LOG(LogTemp, Warning, TEXT("Mesh parseado correctamente. Vértices: %d | Triángulos: %d"), Vertices.Num(), Triangles.Num() / 3);

	UWorld* World = GetWorld();
	if (World) {

		FVector Location = GetActorLocation() + FVector(-150.0f, 0.0f, 100.0f);
		FRotator Rotation = FRotator(0.0f, 0.0f, 0.0f);
		
		AGLBModelActor* item = World->SpawnActor<AGLBModelActor>(AGLBModelActor::StaticClass(), Location, Rotation);
		item->CreateProceduralMesh(Vertices, Triangles, Normals);

		GetWorld()->GetTimerManager().ClearTimer(ReconstructionTimerHandle);
		GetWorld()->GetTimerManager().SetTimer(ReconstructionTimerHandle,this,&APointCloudWebSocketClient::StopReconstructionEffect,5.0f,false);
	}
}