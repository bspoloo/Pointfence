// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WebSocketsModule.h"
#include "IWebSocket.h"
#include "LidarPointCloud.h"
#include "LidarPointCloudComponent.h"
#include "ProceduralMeshComponent.h"
#include "Misc/Base64.h"
#include "Serialization/JsonReader.h"
#include "HAL/PlatformFileManager.h"
#include "Misc/FileHelper.h"
#include <Containers/Array.h>
#include <Templates/SharedPointer.h>
#include <Dom/JsonObject.h>
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
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere)
	UProceduralMeshComponent* MeshComponent;
public:	
	// Called every frame

	UFUNCTION(BlueprintCallable, Category = "Websocket")
	void ConnectToServer(const FString& ServerUrl = TEXT("ws://192.168.100.73:8000/api/v1/scanning/ws/unreal"));

	UFUNCTION(BlueprintCallable, Category = "Websocket")
	void DisconnectFromServer();

	UFUNCTION(BlueprintCallable, Category = "Websocket")
	void RequestGLBFile(const FString& Filename);

	UFUNCTION(BlueprintCallable, Category = "Websocket")
	bool SaveGLBToFile(const FString& FilePath, const TArray<uint8>& Data);

	UFUNCTION(BlueprintImplementableEvent, Category = "Websocket")
	void OnGLBFileReceived(const FString& FilePath);

	UFUNCTION(BlueprintImplementableEvent, Category = "Websocket")
	void OnReceiveProgress(int32 ByteReceived, int32 TotalBytes);

private:

	TSharedPtr<IWebSocket> WebSocket;

	TArray<uint8> InComingBinaryBuffer;
	TArray<uint8> GLBFileBuffer;
	FString CurrentFilename;
	int32 ExpectedFileSize;
	bool bReceivingGLB;

	void OnWebSocketConnected();
	void OnWebSocketConectionError(const FString& Error);
	void OnWebSocketClosed(int32 StatusCode, const FString& Reason, bool bWasClean);
	void OnWebSocketMessage(const FString& Message);
	void OnWebSocketBinaryData(const void* Data, SIZE_T Size, SIZE_T BytesRemaining);

	void ProcessGLBMessage(const TSharedPtr<FJsonObject>& JsonObject);
	void ProcessGLBChunk(const FString& EncodedData, int32 ChunkIndex, int32 TotalSent, int32 TotalSize);
	void FinalizeGLBFile();
};
