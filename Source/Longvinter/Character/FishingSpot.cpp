// Fill out your copyright notice in the Description page of Project Settings.


#include "FishingSpot.h"

AFishingSpot::AFishingSpot()
{
	PrimaryActorTick.bCanEverTick = true;

	mStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	
	ConstructorHelpers::FObjectFinder<UStaticMesh> finder(TEXT("StaticMesh'/Game/Mesh/FIsh/Fish_SM_Fishes_mo.Fish_SM_Fishes_mo'"));

	if (finder.Succeeded())
	{
		mStaticMeshComponent->SetStaticMesh(finder.Object);
	}

	SetRootComponent(mStaticMeshComponent);

	mCapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
	mCapsuleComponent->SetupAttachment(mStaticMeshComponent);
	mCapsuleComponent->SetCollisionProfileName(TEXT("FishingSpot"));
	mCapsuleComponent->SetGenerateOverlapEvents(true);
	mCapsuleComponent->SetNotifyRigidBodyCollision(true);
	mCapsuleComponent->SetCapsuleHalfHeight(150.f);
	mCapsuleComponent->SetCapsuleRadius(150.f);
}

void AFishingSpot::BeginPlay()
{
	Super::BeginPlay();
}

void AFishingSpot::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}