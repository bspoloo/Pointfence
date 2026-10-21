// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Sound/SoundBase.h"
#include "./GLBModelActor.h"
#include "PushButton.generated.h"

UCLASS()
class POINTFENCE_API APushButton : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APushButton();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	AGLBModelActor* ObjectItem;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Button")
    UStaticMeshComponent* ButtonMesh;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Box")
    UBoxComponent* DetectionBox;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sound")
	USoundBase* PressSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sound")
	USoundBase* OffSound;

	

    UFUNCTION()
    void OnObjectBeginOverlap(UPrimitiveComponent* OverlappedComponent,AActor* OtherActor, UPrimitiveComponent* OtherComp,int32 OtherBodyIndex,bool bFromSweep, const FHitResult& SweepResult );
	
	UFUNCTION()
	void OnObjectEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
};
