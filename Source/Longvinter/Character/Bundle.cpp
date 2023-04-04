#include "Bundle.h"
#include "Bundle.h"
// Fill out your copyright notice in the Description page of Project Settings.


#include "Bundle.h"

ABundle::ABundle()
{
	mItemID = -1;
	PrimaryActorTick.bCanEverTick = true;

	mStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));

	ConstructorHelpers::FObjectFinder<UStaticMesh> finder(TEXT("StaticMesh'/Game/Mesh/DefaultItem_SM_DefaultItem_mo.DefaultItem_SM_DefaultItem_mo'"));

	if (finder.Succeeded())
	{
		mStaticMeshComponent->SetStaticMesh(finder.Object);
	}

	SetRootComponent(mStaticMeshComponent);

	mCapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
	mCapsuleComponent->SetupAttachment(mStaticMeshComponent);
	mCapsuleComponent->SetCollisionProfileName(TEXT("Bundle"));
	mCapsuleComponent->SetGenerateOverlapEvents(true);
	mCapsuleComponent->SetNotifyRigidBodyCollision(true);
	mCapsuleComponent->SetCapsuleHalfHeight(50.f);
	mCapsuleComponent->SetCapsuleRadius(50.f);

	mStaticMeshComponent->SetIsReplicated(true);

	bReplicates = true;
}

void ABundle::BeginPlay()
{
	Super::BeginPlay();
}

void ABundle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
