// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProceduralMeshComponent.h"

#include "GLBModelActor.generated.h"

UCLASS()
class POINTFENCE_API AGLBModelActor : public AActor
{
	GENERATED_BODY()

public:

	AGLBModelActor();

protected:

	virtual void BeginPlay() override;

public:

	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Model")
	UProceduralMeshComponent* MeshComponent;

	UFUNCTION(BlueprintCallable, Category = "Model")
	void SetModelScale(float NewScale);

	UFUNCTION(BlueprintCallable, Category = "Model")
	void RotateModel(float Pitch, float Yaw, float Roll);

	UFUNCTION(BlueprintCallable, Category = "Model")
	void DeleteModel();

	UFUNCTION(BlueprintImplementableEvent, Category = "Model")
	void OnModelLoaded();

	UFUNCTION(BlueprintImplementableEvent, Category = "Model")
	void OnModelLoadFailed(const FString& Error);

	UFUNCTION(BlueprintCallable, Category = "Model")
	void CreateProceduralMesh(const TArray<FVector>& Vertices, const TArray<int32>& Triangles, const TArray<FVector>& Normals);

	UFUNCTION(BlueprintCallable, Category = "Model")
	void ClearProceduralMesh();
};