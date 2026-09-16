// Copyright Epic Games, Inc. All Rights Reserved.

#include "PointfenceGameMode.h"
#include "PointfenceCharacter.h"
#include "./Server/PointCloudWebSocketClient.h"
#include "UObject/ConstructorHelpers.h"

APointfenceGameMode::APointfenceGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("Blueprint'/Game/Blueprints/Characters/AlexCharacter_BP.AlexCharacter_BP'"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

}

void APointfenceGameMode::BeginPlay()
{
	/*UWorld* const World = GetWorld();
	FVector Location = FVector(-649.0f, -58.0f, 152.0f);
	FRotator Rotation = FRotator::ZeroRotator;
	World->SpawnActor<APointCloudWebSocketClient>(Location, Rotation);*/
}