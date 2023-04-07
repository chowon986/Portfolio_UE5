// Fill out your copyright notice in the Description page of Project Settings.


#include "DropItem.h"

ADropItem::ADropItem()
{
	PrimaryActorTick.bCanEverTick = true;
	bReplicates = true;

	mItemID = -1;

	mCapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
	mCapsuleComponent->SetCollisionProfileName(TEXT("NPA"));
	mCapsuleComponent->SetGenerateOverlapEvents(true);
	mCapsuleComponent->SetNotifyRigidBodyCollision(true);
	SetRootComponent(mCapsuleComponent);

	mStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	mStaticMeshComponent->SetupAttachment(mCapsuleComponent);
}

void ADropItem::BeginPlay()
{
	Super::BeginPlay();
}

void ADropItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
