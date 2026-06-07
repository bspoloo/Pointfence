// Fill out your copyright notice in the Description page of Project Settings.


#include "./PointCloudWebSocketClient.h"

// Sets default values
APointCloudWebSocketClient::APointCloudWebSocketClient()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	PointCloudComponent = CreateDefaultSubobject<ULidarPointCloudComponent>(TEXT("PointCloudComponent"));
	RootComponent = PointCloudComponent;
	CurrentPointCloud = nullptr;

	PointCloudComponent->SetGenerateOverlapEvents(true);
	PointCloudComponent->SetSimulatePhysics(true);
	PointCloudComponent->SetMobility(EComponentMobility::Movable); 
	PointCloudComponent->SetCollisionProfileName(FName("BlockAll"));
	PointCloudComponent->SetMassOverrideInKg(NAME_None, 100.0f);
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
				CreatePointCloudFromBinaryData(BinaryData);
			});
		InComingBinaryBuffer.Empty();
	}
}

void APointCloudWebSocketClient::OnWebSocketMessage(const FString& Message)
{
	UE_LOG(LogTemp, Warning, TEXT("Mensaje recibido: %s"), *Message);
}

void APointCloudWebSocketClient::CreatePoinCloudFromBinary(const TArray<uint8>& BinaryData)
{
}

void APointCloudWebSocketClient::OnWebSocketConnected()
{
	UE_LOG(LogTemp, Warning, TEXT("WebSocket conectado al servidor"));
	WebSocket->Send("Ready to send data points");
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

void APointCloudWebSocketClient::CreatePointCloudFromBinaryData(const TArray<uint8>& BinaryData)
{
	if (BinaryData.Num() < 4) {
		UE_LOG(LogTemp, Error, TEXT("Datos binarios muy pequeños: %d bytes"), BinaryData.Num());
		return;
	}

	uint32 NumPoints = *reinterpret_cast<const uint32*>(BinaryData.GetData());
	int32 BytesPerPoint = sizeof(float) * 3 + sizeof(uint8) * 3;
	int32 ExpectedSize = 4 + NumPoints * BytesPerPoint;

	if (BinaryData.Num() != ExpectedSize) {
		UE_LOG(LogTemp, Error, TEXT("Tamaño de datos incorrecto. Esperado: %d, Recibido: %d"),
			ExpectedSize, BinaryData.Num());
		return;
	}
	UE_LOG(LogTemp, Warning, TEXT("Procesando nube de puntos con %u puntos"), NumPoints);

	FString AssetName = FString::Printf(TEXT("PointCloud_%lld"), FDateTime::Now().GetTicks());

	CurrentPointCloud = NewObject<ULidarPointCloud>(GetTransientPackage(), FName(*AssetName));

	if (!CurrentPointCloud) {
		UE_LOG(LogTemp, Error, TEXT("No se pudo crear el asset de nube de puntos"));
		return;
	}

	TArray<FLidarPointCloudPoint> Points;

	Points.Reserve(NumPoints);
	const uint8* DataPtr = BinaryData.GetData() + 4;

	for (uint32 i = 0; i < NumPoints; i++) {
		FLidarPointCloudPoint Point;
		
		Point.Location.X = *reinterpret_cast<const float*>(DataPtr); DataPtr += sizeof(float);
		Point.Location.Y = *reinterpret_cast<const float*>(DataPtr); DataPtr += sizeof(float);
		Point.Location.Z = *reinterpret_cast<const float*>(DataPtr); DataPtr += sizeof(float);

		Point.Color.R = *DataPtr++;
		Point.Color.G = *DataPtr++;
		Point.Color.B = *DataPtr++;

		Points.Add(Point);
	}

	if (Points.Num() == 0)
	{
		UE_LOG(LogTemp,Error,TEXT("No se recibieron puntos"));
		return;
	}

	FBox Bounds(EForceInit::ForceInit);
	for (const FLidarPointCloudPoint& Point : Points)
	{
		Bounds += Point.Location;
	}

	CurrentPointCloud->Initialize(Bounds);
	FVector VectorSpawned = GetActorLocation() + FVector(0.0f, 0.0f, 100);
	CurrentPointCloud->InsertPoints(Points, ELidarPointCloudDuplicateHandling::Ignore, true, FVector::ZeroVector);
	PointCloudComponent->SetPointCloud(CurrentPointCloud);

	PointCloudComponent->SetRelativeRotation(FRotator(0, 0, -90));
	PointCloudComponent->SetRelativeLocation(VectorSpawned);
	PointCloudComponent->SetWorldScale3D(FVector(0.20f, 0.2f, 0.2f));

	CurrentPointCloud->MaxCollisionError = 100.0f;
	CurrentPointCloud->BuildCollision();
}
