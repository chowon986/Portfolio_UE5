// Fill out your copyright notice in the Description page of Project Settings.


#include "Mushroom.h"

AMushroom::AMushroom()
{
	mItemID = 149;
	PrimaryActorTick.bCanEverTick = true;

	mStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));

	ConstructorHelpers::FObjectFinder<UStaticMesh> finder(TEXT("StaticMesh'/Game/Mesh/Mushrooms_SM_Mushroom_01_Merged_mo.Mushrooms_SM_Mushroom_01_Merged_mo'"));

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

	mStaticMeshComponent->SetIsReplicated(true);

	bReplicates = true;
}

void AMushroom::BeginPlay()
{
	Super::BeginPlay();
}

void AMushroom::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
