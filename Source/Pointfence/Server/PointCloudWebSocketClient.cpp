// Fill out your copyright notice in the Description page of Project Settings.

#include "PointCloudWebSocketClient.h"

#include "Async/Async.h"
#include "Engine/World.h"
#include "Modules/ModuleManager.h"
#include "../ItemsGLB/GLBModelActor.h"

APointCloudWebSocketClient::APointCloudWebSocketClient()
{
	PrimaryActorTick.bCanEverTick = false;

	MeshComponent = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("MeshComponent"));
	RootComponent = MeshComponent;
	MeshComponent->bUseAsyncCooking = true;
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


void APointCloudWebSocketClient::ConnectToServer(const FString& ServerUrl)
{
	if (WebSocket.IsValid() && WebSocket->IsConnected())
	{
		UE_LOG(LogTemp, Warning, TEXT("WebSocket ya está conectado."));
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
		return;
	}

	WebSocket->OnConnected().AddUObject(this, &APointCloudWebSocketClient::OnWebSocketConnected);
	WebSocket->OnConnectionError().AddUObject(this, &APointCloudWebSocketClient::OnWebSocketConectionError);
	WebSocket->OnClosed().AddUObject(this, &APointCloudWebSocketClient::OnWebSocketClosed);
	WebSocket->OnMessage().AddUObject(this, &APointCloudWebSocketClient::OnWebSocketMessage);
	WebSocket->OnRawMessage().AddUObject(this, &APointCloudWebSocketClient::OnWebSocketBinaryData);

	UE_LOG(LogTemp, Warning, TEXT("Conectando a WebSocket: %s"), *ServerUrl);
	WebSocket->Connect();
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


void APointCloudWebSocketClient::OnWebSocketConnected()
{
	UE_LOG(LogTemp, Warning, TEXT("WebSocket conectado al servidor."));

	if (WebSocket.IsValid() && WebSocket->IsConnected())
	{
		WebSocket->Send(TEXT("READY"));
	}
}


void APointCloudWebSocketClient::OnWebSocketConectionError(
	const FString& Error
)
{
	UE_LOG(LogTemp, Error, TEXT("WebSocket Error: %s"), *Error);
}


void APointCloudWebSocketClient::OnWebSocketClosed(int32 StatusCode, const FString& Reason, bool bWasClean)
{
	UE_LOG(LogTemp, Warning, TEXT("WebSocket cerrado. Código: %d | Razón: %s | Clean: %s"), StatusCode, *Reason, bWasClean ? TEXT("true") : TEXT("false"));
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

		FVector Location = GetActorLocation() + FVector(0.0f, 0.0f, 100.0f);
		FRotator Rotation = FRotator(0.0f, 0.0f, 0.0f);
		
		AGLBModelActor* item = World->SpawnActor<AGLBModelActor>(AGLBModelActor::StaticClass(), Location, Rotation);
		item->CreateProceduralMesh(Vertices, Triangles, Normals);
	}
	//CreateMesh(Vertices, Triangles, Normals);
}

void APointCloudWebSocketClient::CreateMesh(const TArray<FVector>& Vertices, const TArray<int32>& Triangles, const TArray<FVector>& Normals)
{
	if (!MeshComponent)
	{
		UE_LOG(LogTemp, Error, TEXT("MeshComponent no existe."));
		return;
	}

	if (Vertices.Num() == 0)
	{
		UE_LOG(LogTemp, Error, TEXT("No hay vertices para crear el mesh."));
		return;
	}

	if (Triangles.Num() == 0)
	{
		UE_LOG(LogTemp, Error, TEXT("No hay índices para crear el mesh."));
		return;
	}

	if (Normals.Num() != Vertices.Num())
	{
		UE_LOG(LogTemp, Error, TEXT("La cantidad de normales no coincide con los vertices."));
		return;
	}

	const float MeshScale = 300.0f;

	TArray<FVector> ScaledVertices;
	ScaledVertices.SetNumUninitialized(Vertices.Num());

	for (int32 i = 0; i < Vertices.Num(); ++i)
	{
		ScaledVertices[i] = Vertices[i] * MeshScale;
	}

	TArray<int32> CorrectedTriangles;
	CorrectedTriangles.SetNumUninitialized(Triangles.Num());

	for (int32 i = 0; i < Triangles.Num(); i += 3)
	{
		CorrectedTriangles[i] = Triangles[i];
		CorrectedTriangles[i + 1] = Triangles[i + 2];
		CorrectedTriangles[i + 2] = Triangles[i + 1];
	}

	TArray<FVector> CorrectedNormals;
	CorrectedNormals.SetNumUninitialized(Normals.Num());

	for (int32 i = 0; i < Normals.Num(); ++i)
	{
		CorrectedNormals[i] = -Normals[i];
	}

	TArray<FVector2D> UV0;
	UV0.SetNumZeroed(ScaledVertices.Num());

	TArray<FColor> VertexColors;
	VertexColors.SetNumZeroed(ScaledVertices.Num());

	TArray<FProcMeshTangent> Tangents;
	Tangents.SetNumZeroed(ScaledVertices.Num());

	MeshComponent->ClearAllMeshSections();

	MeshComponent->CreateMeshSection(
		0,
		ScaledVertices,
		CorrectedTriangles,
		CorrectedNormals,
		UV0,
		VertexColors,
		Tangents,
		true
	);


	MeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	MeshComponent->SetCollisionProfileName(TEXT("BlockAll"));
	MeshComponent->SetVisibility(true);

	UE_LOG(LogTemp, Warning, TEXT("Mesh creado correctamente. Vertices: %d | Triángulos: %d | Escala: %.2f"),
		ScaledVertices.Num(),
		CorrectedTriangles.Num() / 3,
		MeshScale
	);
}


void APointCloudWebSocketClient::ClearMesh()
{
	if (MeshComponent)
	{
		MeshComponent->ClearAllMeshSections();
		UE_LOG(LogTemp, Log, TEXT("Mesh limpiado."));
	}
}