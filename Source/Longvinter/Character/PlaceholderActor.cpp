// Fill out your copyright notice in the Description page of Project Settings.


#include "PlaceholderActor.h"

APlaceholderActor::APlaceholderActor()
{
	PrimaryActorTick.bCanEverTick = true;

	mStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));

	ConstructorHelpers::FObjectFinder<UStaticMesh> finder(TEXT("StaticMesh'/Game/Mesh/Flower_SM_Flower_Poppy_mo.Flower_SM_Flower_Poppy_mo'"));

	if (finder.Succeeded())
	{
		mStaticMeshComponent->SetStaticMesh(finder.Object);
	}


	mCapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
	mCapsuleComponent->SetCollisionProfileName(TEXT("NPA"));
	mCapsuleComponent->SetGenerateOverlapEvents(true);
	mCapsuleComponent->SetNotifyRigidBodyCollision(true);
	mCapsuleComponent->SetCapsuleHalfHeight(80.f);
	mCapsuleComponent->SetCapsuleRadius(80.f);

	mStaticMeshComponent->SetupAttachment(mCapsuleComponent);
	SetRootComponent(mCapsuleComponent);

	bReplicates = true;

	mPlaceholderComponent = CreateDefaultSubobject<UPlaceholder>(TEXT("Placeholder"));
	mPlaceholderComponent->SetIsReplicated(true);
}

void APlaceholderActor::BeginPlay()
{
	Super::BeginPlay();
}

void APlaceholderActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void APlaceholderActor::ServerAddAllItems_Implementation(const TArray<int32>& Items)
{
	mPlaceholderComponent->ServerAddAllItems(Items);;
}

void APlaceholderActor::ServerAddItem_Implementation(int32 ItemID)
{
	mPlaceholderComponent->ServerAddItem(ItemID);
}

void APlaceholderActor::ServerRemoveItem_Implementation(int32 ItemID)
{
	mPlaceholderComponent->ServerRemoveItem(ItemID);
}

