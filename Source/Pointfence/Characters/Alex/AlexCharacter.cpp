// Fill out your copyright notice in the Description page of Project Settings.


#include "./AlexCharacter.h"
#include "../../ItemsGLB/PushButton.h"
#include "Kismet/GameplayStatics.h"
#include "EngineUtils.h"

// Sets default values
AAlexCharacter::AAlexCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GetCapsuleComponent()->InitCapsuleSize(50.0f, 100.0f);
	GetCapsuleComponent()->SetGenerateOverlapEvents(true);
	GetCapsuleComponent()->OnComponentBeginOverlap.AddDynamic(this,&AAlexCharacter::OnObjectBeginOverlap);

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = true;
	bUseControllerRotationRoll = false;

	GetCharacterMovement()->bOrientRotationToMovement = false;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f);
	GetCharacterMovement()->JumpZVelocity = 300.0f;
	GetCharacterMovement()->AirControl = 0.1f;
	GetCharacterMovement()->MaxWalkSpeed = 300.0f;
	//GetCharacterMovement()->MaxAcceleration = 200.0f;

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);

	CameraBoom->TargetArmLength = 300.0f;
	CameraBoom->bUsePawnControlRotation = true;

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));

	FollowCamera->SetupAttachment(GetMesh(), TEXT("head"));
	FollowCamera->SetRelativeLocation(FVector(10.f, 22.f, 1.f));
	//FollowCamera->SetRelativeRotation(FRotator(0.f, 90.f, 0.f));
	FollowCamera->bUsePawnControlRotation = true;
}

// Called when the game starts or when spawned
void AAlexCharacter::BeginPlay()
{
	Super::BeginPlay();

	if (HUDClass)
	{
		HUDWidget = CreateWidget<UUserWidget>(GetWorld(),HUDClass);
		if (HUDWidget)
		{
			HUDWidget->AddToViewport();
		}
	}

	for (TActorIterator<APushButton> It(GetWorld()); It; ++It)
	{
		TotalButtons++;

		//UE_LOG(LogTemp, Warning, TEXT("Conectando a WebSocket: %f"), *TotalButtons);

	}
}

void AAlexCharacter::TakeItem(AGLBModelActor* Item)
{
	ItemGLB = Item;
}

void AAlexCharacter::DropItem()
{
	if (ItemGLB) {
		ItemGLB->EnableCollision();
		ItemGLB = nullptr;
	}
}

// Called every frame
void AAlexCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (ItemGLB)
	{
		FVector Forward = GetActorForwardVector();
		FVector CurrentLocation = GetActorLocation() + Forward * 150.0f;

		ItemGLB->SetActorLocation(CurrentLocation);
	}
	TakeDamage(DeltaTime * 0.3);
}

// Called to bind functionality to input
void AAlexCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAction("DropItem", IE_Released, this, &AAlexCharacter::DropItem);

	PlayerInputComponent->BindAxis("MoveForward", this, &AAlexCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AAlexCharacter::MoveRight);

	PlayerInputComponent->BindAxis("RotateItemForward", this, &AAlexCharacter::RotateItemForward);
	PlayerInputComponent->BindAxis("RotateItemRight", this, &AAlexCharacter::RotateItemRight);
}

void AAlexCharacter::MoveForward(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void AAlexCharacter::MoveRight(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		AddMovementInput(Direction, Value);
	}
}

void AAlexCharacter::RotateItemForward(float Value)
{
	if (ItemGLB && Value != 0.0f)
	{
		ItemGLB->RotateModel(Value * 1.0f, 0.0f, 0.0f);
	}
}

void AAlexCharacter::RotateItemRight(float Value)
{
	if (ItemGLB && Value != 0.0f)
	{
		ItemGLB->RotateModel(0.0f, Value * 1.0f, 0.0f);
	}
}

void AAlexCharacter::OnObjectBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AGLBModelActor* Item = Cast<AGLBModelActor>(OtherActor);
	if (Item)
	{
		ItemGLB = Item;
		ItemGLB->DisableCollision();
	}
}

void AAlexCharacter::AddPoint()
{
	CurrentButtons++;

	if (CurrentButtons != TotalButtons) return;

	FString LevelName = UGameplayStatics::GetCurrentLevelName(this, true);

	if (LevelName == "Tutorial") UGameplayStatics::OpenLevel(this, FName("Level1"));
	else if (LevelName == "Level1") UGameplayStatics::OpenLevel(this, FName("Level2"));
	else if (LevelName == "Level2") UGameplayStatics::OpenLevel(this, FName("Level3"));
	else UGameplayStatics::OpenLevel(this, FName("Tutorial"));
}

void AAlexCharacter::RemovePoint()
{
	CurrentButtons--;
}

void AAlexCharacter::TakeDamage(float Damage)
{
	if (Health <= 0.0f) return;

	Health = FMath::Clamp(Health - Damage, 0.0f, MaxHealth);

	if (Health <= 0.0f) UGameplayStatics::OpenLevel(this, FName("Menu"));
}