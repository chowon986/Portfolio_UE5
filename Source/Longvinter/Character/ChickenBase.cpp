// Fill out your copyright notice in the Description page of Project Settings.


#include "ChickenBase.h"

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
