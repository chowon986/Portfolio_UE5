// Fill out your copyright notice in the Description page of Project Settings.


#include "FarmingBox.h"

AFarmingBox::AFarmingBox()
{
	PrimaryActorTick.bCanEverTick = true;
	bReplicates = true;

	mStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));

	ConstructorHelpers::FObjectFinder<UStaticMesh> finder(TEXT("StaticMesh'/Game/Mesh/Container_SM_Container_mo.Container_SM_Container_mo'"));

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

	mFarmingBoxComponent = CreateDefaultSubobject<UFarmingBoxComponent>(TEXT("FarmingBox"));
}

void AFarmingBox::BeginPlay()
{
	Super::BeginPlay();
}

void AFarmingBox::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	// 만약 Box가 비었으면 Timer 세팅하고 삭제
}
