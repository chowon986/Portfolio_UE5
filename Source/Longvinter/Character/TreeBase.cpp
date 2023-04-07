// Fill out your copyright notice in the Description page of Project Settings.


#include "TreeBase.h"
#include "DropItem.h"

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
	if (Max == -1)
		return damageApplied;

	if (GetCurrentHealth() > 0)
	{
		SpawnItem();
	}

	return damageApplied;
}

void ATreeBase::OnHealthUpdate()
{
	if (GetCurrentHealth() <= 0)
	{
		if (GetLocalRole() == ROLE_Authority)
		{
			Destroy();
			SpawnItem();
		}
	}
}

void ATreeBase::BeginPlay()
{
	Super::BeginPlay();
}

void ATreeBase::SpawnItem()
{
	if (GetLocalRole() == ROLE_Authority)
	{
		int Max = mItemClassArray.Num() - 1;
		int RandomItemIndex = FMath::RandRange(0, Max);

		FActorSpawnParameters Param;
		Param.Owner = this;
		Param.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

		FTransform CurTransform = GetTransform();

		float ZValue = CurTransform.GetLocation().Z - GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
		float XValue = CurTransform.GetLocation().X;
		float YValue = CurTransform.GetLocation().Y + 50;
		ADropItem* SpawnedActor = GetWorld()->SpawnActor<ADropItem>(mItemClassArray[RandomItemIndex], FVector(XValue, YValue, ZValue), CurTransform.GetRotation().Rotator(), Param);
	}
}

void ATreeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
