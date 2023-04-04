// Fill out your copyright notice in the Description page of Project Settings.


#include "ChristmasGift.h"

AChristmasGift::AChristmasGift()
{
	PrimaryActorTick.bCanEverTick = true;
	bReplicates = true;

	mItemID = -1;

	mStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));

	mCapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
	mCapsuleComponent->SetCollisionProfileName(TEXT("NPA"));
	mCapsuleComponent->SetGenerateOverlapEvents(true);
	mCapsuleComponent->SetNotifyRigidBodyCollision(true);

	mCapsuleComponent->SetupAttachment(mStaticMeshComponent);
	SetRootComponent(mStaticMeshComponent);
}

void AChristmasGift::BeginPlay()
{
	Super::BeginPlay();
}

void AChristmasGift::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
