// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Sound/SoundBase.h"
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

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Button")
    UStaticMeshComponent* ButtonMesh;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Button")
    UBoxComponent* DetectionBox;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button")
	USoundBase* PressSound;

    UFUNCTION()
    void OnObjectBeginOverlap(UPrimitiveComponent* OverlappedComponent,AActor* OtherActor, UPrimitiveComponent* OtherComp,int32 OtherBodyIndex,bool bFromSweep, const FHitResult& SweepResult );
	void OnObjectEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
};
