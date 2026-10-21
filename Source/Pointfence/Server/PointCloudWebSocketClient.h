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
#include "NiagaraSystem.h"
#include "NiagaraComponent.h"
#include "NiagaraFunctionLibrary.h"
#include "PointCloudWebSocketClient.generated.h"

class UUConnectionStatusWidget;

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
	UStaticMeshComponent* MeshComponent;

	UPROPERTY()
	UNiagaraSystem* PressParticle = nullptr;

	UPROPERTY()
	UNiagaraComponent* ParticleComponent = nullptr;

	FTimerHandle ReconstructionTimerHandle;

public:


	UFUNCTION(BlueprintCallable, Category = "Websocket")
	void ConnectToServer(const FString& ServerUrl = TEXT("ws://192.168.100.73:8000/api/v1/scanning/ws/unreal"));

	UFUNCTION(BlueprintCallable, Category = "Websocket")
	void DisconnectFromServer();

	void StartReconstructionEffect();
	void StopReconstructionEffect();


	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UI")
	TSubclassOf<UUConnectionStatusWidget> ConnectionStatusWidgetClass;

	UPROPERTY(Transient)
	UUConnectionStatusWidget* ConnectionStatusWidget = nullptr;

	void InitializeConnectionStatusWidget();
	void ShowConnectionConnected();
	void ShowConnectionError();
	void ShowConnectionWarning();
	void ShowConnecting();

private:

	TSharedPtr<IWebSocket> WebSocket;
	TArray<uint8> InComingBinaryBuffer;

	void OnWebSocketConnected();
	void OnWebSocketConectionError(const FString& Error);
	void OnWebSocketClosed(int32 StatusCode,const FString& Reason,bool bWasClean);
	void OnWebSocketMessage(const FString& Message);
	void OnWebSocketBinaryData(const void* Data,SIZE_T Size,SIZE_T BytesRemaining);
	void ProcessMeshBinaryData(const TArray<uint8>& BinaryData);

};