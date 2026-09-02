// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WebSocketsModule.h"
#include "IWebSocket.h"
#include "ProceduralMeshComponent.h"
#include "Serialization/JsonReader.h"
#include "Serialization/JsonSerializer.h"
#include "Dom/JsonObject.h"

#include "PointCloudWebSocketClient.generated.h"

UCLASS()
class POINTFENCE_API APointCloudWebSocketClient : public AActor
{
	GENERATED_BODY()

public:

	APointCloudWebSocketClient();

protected:

	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Mesh")
	UProceduralMeshComponent* MeshComponent;

public:

	UFUNCTION(BlueprintCallable, Category = "Websocket")
	void ConnectToServer(
		const FString& ServerUrl = TEXT("ws://10.67.34.161:8000/api/v1/scanning/ws/unreal")
	);

	UFUNCTION(BlueprintCallable, Category = "Websocket")
	void DisconnectFromServer();

	UFUNCTION(BlueprintCallable, Category = "Mesh")
	void ClearMesh();

private:

	TSharedPtr<IWebSocket> WebSocket;
	TArray<uint8> InComingBinaryBuffer;

	void OnWebSocketConnected();
	void OnWebSocketConectionError(const FString& Error);
	void OnWebSocketClosed(
		int32 StatusCode,
		const FString& Reason,
		bool bWasClean
	);

	void OnWebSocketMessage(const FString& Message);

	void OnWebSocketBinaryData(
		const void* Data,
		SIZE_T Size,
		SIZE_T BytesRemaining
	);

	void ProcessMeshBinaryData(const TArray<uint8>& BinaryData);
	void CreateMesh(const TArray<FVector>& Vertices,const TArray<int32>& Triangles,const TArray<FVector>& Normals);
};