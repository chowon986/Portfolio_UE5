// Fill out your copyright notice in the Description page of Project Settings.


#include "Kingcup.h"

AKingcup::AKingcup()
{
	mItemID = 117;
	PrimaryActorTick.bCanEverTick = true;

	mStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));

	ConstructorHelpers::FObjectFinder<UStaticMesh> finder(TEXT("StaticMesh'/Game/Mesh/Flower_SM_Flower_Kingcup_01_mo.Flower_SM_Flower_Kingcup_01_mo'"));

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
	mCapsuleComponent->SetCapsuleHalfHeight(300.f);
	mCapsuleComponent->SetCapsuleRadius(100.f);

	bReplicates = true;
}

void AKingcup::BeginPlay()
{
	Super::BeginPlay();
}

void AKingcup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
