// Fill out your copyright notice in the Description page of Project Settings.


#include "Mushroom.h"

AMushroom::AMushroom()
{
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
	mCapsuleComponent->SetCollisionProfileName(TEXT("Mushroom"));
	mCapsuleComponent->SetGenerateOverlapEvents(true);
	mCapsuleComponent->SetNotifyRigidBodyCollision(true);
	mCapsuleComponent->SetCapsuleHalfHeight(300.f);
	mCapsuleComponent->SetCapsuleRadius(100.f);
}

void AMushroom::BeginPlay()
{
}

void AMushroom::Tick(float DeltaTime)
{
}
