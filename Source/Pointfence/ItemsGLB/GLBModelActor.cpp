// Fill out your copyright notice in the Description page of Project Settings.

#include "./GLBModelActor.h"

#include "Components/SceneComponent.h"


AGLBModelActor::AGLBModelActor()
{
	PrimaryActorTick.bCanEverTick = false;

	MeshComponent = CreateDefaultSubobject<UProceduralMeshComponent>(
		TEXT("MeshComponent")
	);

	RootComponent = MeshComponent;

	MeshComponent->bUseAsyncCooking = true;

	MeshComponent->SetMobility(EComponentMobility::Movable);
	MeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	MeshComponent->SetCollisionObjectType(ECollisionChannel::ECC_PhysicsBody);
	MeshComponent->bUseComplexAsSimpleCollision = false;
	MeshComponent->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
	MeshComponent->SetCollisionProfileName(TEXT("PhysicsActor"));
	MeshComponent->SetSimulatePhysics(false);
}

void AGLBModelActor::BeginPlay()
{
	Super::BeginPlay();
}


void AGLBModelActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AGLBModelActor::CreateProceduralMesh(const TArray<FVector>& Vertices, const TArray<int32>& Triangles, const TArray<FVector>& Normals)
{
	if (!MeshComponent)
	{
		UE_LOG(LogTemp, Error, TEXT("MeshComponent no existe."));
		return;
	}

	if (Vertices.Num() == 0)
	{
		UE_LOG(LogTemp, Error, TEXT("No hay vertices para crear el mesh."));
		return;
	}

	if (Triangles.Num() == 0)
	{
		UE_LOG(LogTemp, Error, TEXT("No hay índices para crear el mesh."));
		return;
	}

	if (Triangles.Num() % 3 != 0)
	{
		UE_LOG(LogTemp, Error, TEXT("La cantidad de índices debe ser múltiplo de 3."));
		return;
	}

	if (Normals.Num() != Vertices.Num())
	{
		UE_LOG(LogTemp, Error, TEXT("La cantidad de normales no coincide con los vertices.")
		);
		return;
	}

	const float MeshScale = 100.0f;

	TArray<FVector> ScaledVertices;
	ScaledVertices.SetNumUninitialized(Vertices.Num());

	for (int32 i = 0; i < Vertices.Num(); ++i)
	{
		ScaledVertices[i] = Vertices[i] * MeshScale;
	}

	TArray<int32> CorrectedTriangles;
	CorrectedTriangles.SetNumUninitialized(Triangles.Num());

	for (int32 i = 0; i < Triangles.Num(); i += 3)
	{
		CorrectedTriangles[i] = Triangles[i];
		CorrectedTriangles[i + 1] = Triangles[i + 2];
		CorrectedTriangles[i + 2] = Triangles[i + 1];
	}

	TArray<FVector> CorrectedNormals;
	CorrectedNormals.SetNumUninitialized(Normals.Num());

	for (int32 i = 0; i < Normals.Num(); ++i)
	{
		CorrectedNormals[i] = -Normals[i];
	}

	TArray<FVector2D> UV0;
	UV0.SetNumZeroed(ScaledVertices.Num());

	TArray<FColor> VertexColors;
	VertexColors.SetNumZeroed(ScaledVertices.Num());

	TArray<FProcMeshTangent> Tangents;
	Tangents.SetNumZeroed(ScaledVertices.Num());

	MeshComponent->SetSimulatePhysics(false);

	MeshComponent->ClearAllMeshSections();

	MeshComponent->ClearCollisionConvexMeshes();

	MeshComponent->CreateMeshSection(
		0,
		ScaledVertices,
		CorrectedTriangles,
		CorrectedNormals,
		UV0,
		VertexColors,
		Tangents,
		false
	);

	FBox BoundingBox(ForceInit);

	for (const FVector& Vertex : ScaledVertices)
	{
		BoundingBox += Vertex;
	}

	if (!BoundingBox.IsValid)
	{
		UE_LOG(LogTemp, Error, TEXT("No se pudo calcular el BoundingBox."));
		return;
	}

	const FVector Min = BoundingBox.Min;
	const FVector Max = BoundingBox.Max;

	const FVector Center = (Min + Max) * 0.5f;

	const FVector Extent = (Max - Min) * 0.5f;

	UE_LOG(LogTemp, Warning, TEXT("BoundingBox: Center=(%.2f, %.2f, %.2f) ""Extent=(%.2f, %.2f, %.2f)"),
		Center.X,
		Center.Y,
		Center.Z,
		Extent.X,
		Extent.Y,
		Extent.Z
	);

	TArray<FVector> CollisionVertices;

	CollisionVertices.Add(Center + FVector(-Extent.X, -Extent.Y, -Extent.Z));
	CollisionVertices.Add(Center + FVector(Extent.X, -Extent.Y, -Extent.Z));
	CollisionVertices.Add(Center + FVector(Extent.X, Extent.Y, -Extent.Z));
	CollisionVertices.Add(Center + FVector(-Extent.X, Extent.Y, -Extent.Z));
	CollisionVertices.Add(Center + FVector(-Extent.X, -Extent.Y, Extent.Z));
	CollisionVertices.Add(Center + FVector(Extent.X, -Extent.Y, Extent.Z));
	CollisionVertices.Add(Center + FVector(Extent.X, Extent.Y, Extent.Z));
	CollisionVertices.Add(Center + FVector(-Extent.X, Extent.Y, Extent.Z));

	MeshComponent->AddCollisionConvexMesh(CollisionVertices);
	MeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	MeshComponent->SetCollisionObjectType(ECC_PhysicsBody);
	MeshComponent->SetCollisionResponseToAllChannels(ECR_Block);
	MeshComponent->SetCollisionProfileName(TEXT("PhysicsActor"));
	MeshComponent->bUseComplexAsSimpleCollision = false;
	MeshComponent->SetRelativeRotation(FRotator(0.0f, 0.0f, -90.0f));
	MeshComponent->SetMobility(EComponentMobility::Movable);
	MeshComponent->RecreatePhysicsState();
	MeshComponent->SetSimulatePhysics(true);
	MeshComponent->SetEnableGravity(true);
	MeshComponent->WakeRigidBody();
	MeshComponent->SetVisibility(true);

	UE_LOG(LogTemp, Warning, TEXT("Mesh creado correctamente. Vertices: %d | Triángulos: %d | Escala: %.2f"), ScaledVertices.Num(), CorrectedTriangles.Num() / 3, MeshScale);
	UE_LOG(LogTemp, Warning, TEXT("Colisión convexa creada correctamente."));
	UE_LOG(LogTemp, Warning, TEXT("Física y gravedad activadas."));
	OnModelLoaded();
}

void AGLBModelActor::ClearProceduralMesh()
{
	if (!MeshComponent)
	{
		return;
	}

	MeshComponent->ClearAllMeshSections();
	UE_LOG(LogTemp, Log, TEXT("Mesh procedural eliminado."));
}


void AGLBModelActor::SetModelScale(float NewScale)
{
	if (NewScale <= 0.0f)
	{
		UE_LOG(LogTemp, Warning, TEXT("La escala debe ser mayor que 0."));
		return;
	}

	SetActorScale3D(FVector(NewScale));
}

void AGLBModelActor::RotateModel(float Pitch, float Yaw, float Roll)
{
	FRotator NewRotation(Pitch, Yaw, Roll);
	SetActorRotation(NewRotation);
}

void AGLBModelActor::DeleteModel()
{
	ClearProceduralMesh();
	Destroy();
}