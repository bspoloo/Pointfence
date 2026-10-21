// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "MenuGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class POINTFENCE_API AMenuGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	AMenuGameModeBase();
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Audio")
	USoundBase* BackgroundMusic;
};
