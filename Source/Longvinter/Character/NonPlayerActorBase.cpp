// Fill out your copyright notice in the Description page of Project Settings.


#include "NonPlayerActorBase.h"
#include "Net/UnrealNetwork.h"

ANonPlayerActorBase::ANonPlayerActorBase()
	: mItemID(-1)
{
	PrimaryActorTick.bCanEverTick = true;

	bReplicates = true;
}

void ANonPlayerActorBase::BeginPlay()
{
	Super::BeginPlay();
}

void ANonPlayerActorBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ANonPlayerActorBase::SetItemID(int32 ItemID)
{
	mItemID = ItemID; 
}

void ANonPlayerActorBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ANonPlayerActorBase, mItemID);
}