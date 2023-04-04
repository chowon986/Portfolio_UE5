// Fill out your copyright notice in the Description page of Project Settings.


#include "Workbench.h"

AWorkbench::AWorkbench()
{
	PrimaryActorTick.bCanEverTick = true;

	mStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));

	ConstructorHelpers::FObjectFinder<UStaticMesh> finder(TEXT("StaticMesh'/Game/Mesh/SM_Workbench03_SM_Workbench03_mo.SM_Workbench03_SM_Workbench03_mo'"));

	if (finder.Succeeded())
	{
		mStaticMeshComponent->SetStaticMesh(finder.Object);
	}

	SetRootComponent(mStaticMeshComponent);
	
	mCapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
	mCapsuleComponent->SetupAttachment(mStaticMeshComponent);
	mCapsuleComponent->SetCollisionProfileName(TEXT("Workbench"));
	mCapsuleComponent->SetGenerateOverlapEvents(true);
	mCapsuleComponent->SetNotifyRigidBodyCollision(true);
	mCapsuleComponent->SetCapsuleHalfHeight(150.f);
	mCapsuleComponent->SetCapsuleRadius(100.f);
}

void AWorkbench::BeginPlay()
{
	Super::BeginPlay();
}

void AWorkbench::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
