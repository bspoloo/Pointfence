// Copyright Epic Games, Inc. All Rights Reserved.

#include "PointfenceGameMode.h"
#include "PointfenceCharacter.h"
#include "./Server/PointCloudWebSocketClient.h"
#include "UObject/ConstructorHelpers.h"

APointfenceGameMode::APointfenceGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("Blueprint'/Game/Blueprints/Characters/AlexCharacter_BP.AlexCharacter_BP'"));
	static ConstructorHelpers::FObjectFinder<USoundBase> Sound(TEXT("/Game/Sounds/Pilotredsun-_Thanks_Cue.Pilotredsun-_Thanks_Cue"));

	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	if (Sound.Succeeded()) {
		BackgroundMusic = Sound.Object;
	}
}

void APointfenceGameMode::BeginPlay()
{
	/*UWorld* const World = GetWorld();
	FVector Location = FVector(-649.0f, -58.0f, 152.0f);
	FRotator Rotation = FRotator::ZeroRotator;
	World->SpawnActor<APointCloudWebSocketClient>(Location, Rotation);*/

	if (BackgroundMusic) {
		UGameplayStatics::SpawnSound2D(this, BackgroundMusic, 0.25f, 1.0f, 0.0f, nullptr, false, false);
	}
}