// Fill out your copyright notice in the Description page of Project Settings.


#include "BlackLotus.h"

ABlackLotus::ABlackLotus()
{
	mItemID = 145;
	PrimaryActorTick.bCanEverTick = true;

	mStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));

	ConstructorHelpers::FObjectFinder<UStaticMesh> finder(TEXT("StaticMesh'/Game/Mesh/Flower_SM_Flower_BlackLotus_mo.Flower_SM_Flower_BlackLotus_mo'"));

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

void ABlackLotus::BeginPlay()
{
	Super::BeginPlay();
}

void ABlackLotus::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
