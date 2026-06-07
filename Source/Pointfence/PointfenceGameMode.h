// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PointfenceGameMode.generated.h"

UCLASS(minimalapi)
class APointfenceGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	APointfenceGameMode();
	virtual void BeginPlay() override;
};



