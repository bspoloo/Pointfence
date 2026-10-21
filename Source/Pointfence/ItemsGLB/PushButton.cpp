// Fill out your copyright notice in the Description page of Project Settings.


#include "./PushButton.h"
#include "Kismet/GameplayStatics.h"
#include "../Characters/Alex/AlexCharacter.h"

// Sets default values
APushButton::APushButton()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ButtonMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ButtonMesh"));

	RootComponent = ButtonMesh;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Game/Button/button.button"));
	static ConstructorHelpers::FObjectFinder<USoundBase> ButtonSound(TEXT("/Game/Sounds/push_button.push_button"));
	static ConstructorHelpers::FObjectFinder<USoundBase> OffOutSound(TEXT("/Game/Sounds/pick_up.pick_up"));

	if (MeshAsset.Succeeded()) {
		ButtonMesh->SetStaticMesh(MeshAsset.Object);
	}

	if (ButtonSound.Succeeded()) {
		PressSound = ButtonSound.Object;
	}

	if (OffOutSound.Succeeded()) {
		OffSound = OffOutSound.Object;
	}

	ButtonMesh->SetWorldScale3D(FVector(100.0f, 100.0f, 100.0f));
	ButtonMesh->SetWorldRotation(FRotator(0.0f, 0.0f, 90.0f));

	DetectionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("DetectionBox"));
	DetectionBox->SetupAttachment(RootComponent);
	DetectionBox->SetBoxExtent(FVector(50.f, 50.f, 20.f));
	DetectionBox->SetWorldScale3D(FVector(0.01, 0.005, 0.02));
	DetectionBox->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	DetectionBox->SetCollisionResponseToAllChannels(ECR_Overlap);
	DetectionBox->SetGenerateOverlapEvents(true);
	DetectionBox->OnComponentBeginOverlap.AddDynamic(this, &APushButton::OnObjectBeginOverlap);
	DetectionBox->OnComponentEndOverlap.AddDynamic(this, &APushButton::OnObjectEndOverlap);
}

// Called when the game starts or when spawned
void APushButton::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void APushButton::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	DetectionBox->UpdateOverlaps();

}

void APushButton::OnObjectBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Warning, TEXT("Metiendo Objeto"));
	if (AGLBModelActor* Item = Cast<AGLBModelActor>(OtherActor))
	{
		UGameplayStatics::PlaySoundAtLocation(this, PressSound, GetActorLocation());
		APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
		AAlexCharacter* Alex = Cast<AAlexCharacter>(PlayerPawn);

		if (this->ObjectItem == nullptr) {

			Alex->AddPoint();
			ObjectItem = Item;
		}
	}
}

void APushButton::OnObjectEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	UE_LOG(LogTemp, Warning, TEXT("Sacando Objeto"));
	if (AGLBModelActor* Item = Cast<AGLBModelActor>(OtherActor))
	{
		UGameplayStatics::PlaySoundAtLocation(this, OffSound, GetActorLocation());
		APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
		AAlexCharacter* Alex = Cast<AAlexCharacter>(PlayerPawn);

		if (this->ObjectItem != nullptr) {
			Alex->RemovePoint();
			ObjectItem = nullptr;
		}
	}
}
