// Fill out your copyright notice in the Description page of Project Settings.


#include "Pumpkin.h"

APumpkin::APumpkin()
{
	mItemID = 168;
	PrimaryActorTick.bCanEverTick = true;

	mStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));

	ConstructorHelpers::FObjectFinder<UStaticMesh> finder(TEXT("StaticMesh'/Game/Mesh/Pumpkins_SM_CarvedPumpkin01_mo.Pumpkins_SM_CarvedPumpkin01_mo'"));

	if (finder.Succeeded())
	{
		mStaticMeshComponent->SetStaticMesh(finder.Object);
	}

	SetRootComponent(mStaticMeshComponent);

	mCapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
	mCapsuleComponent->SetupAttachment(mStaticMeshComponent);
	mCapsuleComponent->SetCollisionProfileName(TEXT("NPA"));
	mCapsuleComponent->SetGenerateOverlapEvents(true);
	mCapsuleComponent->SetNotifyRigidBodyCollision(true);
	mCapsuleComponent->SetCapsuleHalfHeight(50.f);
	mCapsuleComponent->SetCapsuleRadius(50.f);

	bReplicates = true;
}

void APumpkin::BeginPlay()
{
	Super::BeginPlay();
}

void APumpkin::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
