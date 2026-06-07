// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WebSocketsModule.h"
#include "IWebSocket.h"
#include "LidarPointCloud.h"
#include "LidarPointCloudComponent.h"
#include "ProceduralMeshComponent.h"
#include "PointCloudWebSocketClient.generated.h"

UCLASS()
class POINTFENCE_API APointCloudWebSocketClient : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APointCloudWebSocketClient();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	TSharedPtr<IWebSocket> WebSocket;

	UPROPERTY()
	ULidarPointCloud* CurrentPointCloud;

	UPROPERTY(VisibleAnywhere)
	ULidarPointCloudComponent* PointCloudComponent;

	void OnWebSocketBinaryData(const void* Data,SIZE_T Size,SIZE_T BytesRemaining);
	void OnWebSocketMessage(const FString& Message);
	void CreatePoinCloudFromBinary(const TArray<uint8>& BinaryData);

	void OnWebSocketConnected();
	void OnWebSocketConectionError(const FString& Error);
	void OnWebSocketClosed(int32 StatusCode, const FString& Reason, bool bWasClean);

	TArray<uint8> InComingBinaryBuffer;

	void CreatePointCloudFromBinaryData(const TArray<uint8>& BinaryData);

	UPROPERTY(VisibleAnywhere)
	UProceduralMeshComponent* MeshComponent;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "PointCloud")
	void ConnectToServer(const FString& ServerUrl = TEXT("ws://192.168.100.73:8000/api/v1/points/ws/unreal"));

	UFUNCTION(BlueprintCallable, Category = "PointCloud")
	void DisconnectFromServer();
};
