// Fill out your copyright notice in the Description page of Project Settings.


#include "GroundBase.h"
#include "LvPlayer.h"

AGroundBase::AGroundBase()
{
	mItemID = -1;
	PrimaryActorTick.bCanEverTick = true;

	mStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));

	SetRootComponent(mStaticMeshComponent);

	mCapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
	mCapsuleComponent->SetupAttachment(mStaticMeshComponent);
	mCapsuleComponent->SetCollisionProfileName(TEXT("Ground"));
	mCapsuleComponent->SetGenerateOverlapEvents(true);
	mCapsuleComponent->SetNotifyRigidBodyCollision(true);
	mCapsuleComponent->SetCapsuleHalfHeight(100.f);
	mCapsuleComponent->SetCapsuleRadius(100.f);

	mStaticMeshComponent->SetIsReplicated(true);

	bReplicates = true;
}

void AGroundBase::BeginPlay()
{
	Super::BeginPlay();

	switch (mGroundType)
	{
	case EGroundType::Green:
		mDamage = 0.5f;
		break;
	case EGroundType::White:
		mDamage = 1.0f;
		break;
	default:
		break;
	}
}

void AGroundBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
