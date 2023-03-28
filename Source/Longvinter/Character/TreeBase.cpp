// Fill out your copyright notice in the Description page of Project Settings.


#include "TreeBase.h"

ATreeBase::ATreeBase()
{
	PrimaryActorTick.bCanEverTick = true;

	MaxHealth = 10;
	CurrentHealth = MaxHealth;

	GetCapsuleComponent()->SetCollisionProfileName(TEXT("Tree"));
	GetCapsuleComponent()->SetGenerateOverlapEvents(true);
	GetCapsuleComponent()->SetNotifyRigidBodyCollision(true);

	GetMesh()->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	SetCanBeDamaged(true);

	bReplicates = true;

	mStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	mStaticMesh->SetupAttachment(GetCapsuleComponent());
}

float ATreeBase::TakeDamage(float DamageTaken, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	float damageApplied = CurrentHealth - DamageTaken;
	SetCurrentHealth(damageApplied);

	int Max = mItemClassArray.Num() - 1;
	int RandomItemIndex = FMath::RandRange(0, Max);
	GetWorld()->SpawnActor<ANonPlayerActorBase>(mItemClassArray[RandomItemIndex], GetTransform());

	return damageApplied;
}

void ATreeBase::OnHealthUpdate()
{
	if (GetCurrentHealth() <= 0)
	{
		Destroy();

		int Max = mItemClassArray.Num() - 1;
		int RandomItemIndex = FMath::RandRange(0, Max);
		GetWorld()->SpawnActor<ANonPlayerActorBase>(mItemClassArray[RandomItemIndex], GetTransform());
	}
}

void ATreeBase::BeginPlay()
{
	Super::BeginPlay();
}

void ATreeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
