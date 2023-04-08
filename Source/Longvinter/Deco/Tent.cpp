// Fill out your copyright notice in the Description page of Project Settings.


#include "Tent.h"
#include "Net/UnrealNetwork.h"

ATent::ATent()
{
	PrimaryActorTick.bCanEverTick = true;

	bReplicates = true;

	mIsUpgraded = false;

	mUpgradeStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("UpgradedStaticMesh"));
	mUpgradeStaticMesh->SetupAttachment(mBox);
}

void ATent::OnRep_IsUpgraded()
{
	if (IsUpgraded() == true)
	{
		mUpgradeStaticMesh->SetVisibility(true);
		mStaticMesh->SetVisibility(false);
	}
}

void ATent::BeginPlay()
{
	Super::BeginPlay();
}

void ATent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ATent, mIsUpgraded);
}
