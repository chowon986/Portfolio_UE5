// Fill out your copyright notice in the Description page of Project Settings.


#include "BasicVendor.h"

ABasicVendor::ABasicVendor()
{
	PrimaryActorTick.bCanEverTick = true;

	mStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));

	ConstructorHelpers::FObjectFinder<UStaticMesh> finder(TEXT("StaticMesh'/Game/Mesh/Vendor/Vendor_SM_VendorCombined02_mo.Vendor_SM_VendorCombined02_mo'"));

	if (finder.Succeeded())
	{
		mStaticMeshComponent->SetStaticMesh(finder.Object);
	}

	SetRootComponent(mStaticMeshComponent);

	mCapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
	mCapsuleComponent->SetupAttachment(mStaticMeshComponent);
	mCapsuleComponent->SetCollisionProfileName(TEXT("Vendor"));
	mCapsuleComponent->SetGenerateOverlapEvents(true);
	mCapsuleComponent->SetNotifyRigidBodyCollision(true);
	mCapsuleComponent->SetCapsuleHalfHeight(200.f);
	mCapsuleComponent->SetCapsuleRadius(200.f);
}

void ABasicVendor::BeginPlay()
{
	Super::BeginPlay();
}

void ABasicVendor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
