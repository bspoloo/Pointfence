// Copyright Epic Games, Inc. All Rights Reserved.

#include "PointfenceGameMode.h"
#include "PointfenceCharacter.h"
#include "UObject/ConstructorHelpers.h"

APointfenceGameMode::APointfenceGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
