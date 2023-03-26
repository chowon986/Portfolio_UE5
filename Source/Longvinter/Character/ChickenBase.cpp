// Fill out your copyright notice in the Description page of Project Settings.


#include "ChickenBase.h"
#include "Net/UnrealNetwork.h"


AChickenBase::AChickenBase()
{
	PrimaryActorTick.bCanEverTick = true;

	MaxHealth = 10;
	CurrentHealth = MaxHealth;

	GetCapsuleComponent()->SetCollisionProfileName(TEXT("Chicken"));
	GetCapsuleComponent()->SetGenerateOverlapEvents(true);
	GetCapsuleComponent()->SetNotifyRigidBodyCollision(true);

	GetMesh()->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	SetCanBeDamaged(true);
}

void AChickenBase::BeginPlay()
{
	Super::BeginPlay();
}

void AChickenBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

//
//void AChickenBase::ServerTakeDamage_Implementation(float DamageTaken, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
//{
//	Super::TakeDamage(DamageTaken, DamageEvent, EventInstigator, DamageCauser);
//}
