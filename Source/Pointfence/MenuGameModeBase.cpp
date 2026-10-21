// Fill out your copyright notice in the Description page of Project Settings.


#include "MenuGameModeBase.h"

AMenuGameModeBase::AMenuGameModeBase()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FObjectFinder<USoundBase> Sound(TEXT("/Game/Sounds/warm_nights_Cue.warm_nights_Cue"));

	if (Sound.Succeeded()) {
		BackgroundMusic = Sound.Object;
	}
}

void AMenuGameModeBase::BeginPlay()
{
	if (BackgroundMusic) {
		UGameplayStatics::SpawnSound2D(this, BackgroundMusic, 1.0f, 1.0f, 0.0f, nullptr, false, false);
	}
}