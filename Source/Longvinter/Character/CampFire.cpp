// Fill out your copyright notice in the Description page of Project Settings.


#include "CampFire.h"

ACampFire::ACampFire()
{
	PrimaryActorTick.bCanEverTick = true;

	mStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));

	ConstructorHelpers::FObjectFinder<UStaticMesh> finder(TEXT("StaticMesh'/Game/Mesh/CampFire_SM_CampfireLogs_mo.CampFire_SM_CampfireLogs_mo'"));

	if (finder.Succeeded())
	{
		mStaticMeshComponent->SetStaticMesh(finder.Object);
	}

	SetRootComponent(mStaticMeshComponent);

	mCapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
	mCapsuleComponent->SetupAttachment(mStaticMeshComponent);
	mCapsuleComponent->SetCollisionProfileName(TEXT("CampFire"));
	mCapsuleComponent->SetGenerateOverlapEvents(true);
	mCapsuleComponent->SetNotifyRigidBodyCollision(true);
	mCapsuleComponent->SetCapsuleHalfHeight(100.f);
	mCapsuleComponent->SetCapsuleRadius(100.f);
}

void ACampFire::BeginPlay()
{
	Super::BeginPlay();
}

void ACampFire::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
