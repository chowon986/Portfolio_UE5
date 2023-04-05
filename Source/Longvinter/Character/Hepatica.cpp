// Fill out your copyright notice in the Description page of Project Settings.


#include "Hepatica.h"

AHepatica::AHepatica()
{
	mItemID = 119;
	PrimaryActorTick.bCanEverTick = true;

	mStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));

	ConstructorHelpers::FObjectFinder<UStaticMesh> finder(TEXT("StaticMesh'/Game/Mesh/Flower_SM_Flower_Hepatica_01_mo.Flower_SM_Flower_Hepatica_01_mo'"));

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

void AHepatica::BeginPlay()
{
	Super::BeginPlay();
}

void AHepatica::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
