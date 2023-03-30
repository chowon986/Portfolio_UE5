// Fill out your copyright notice in the Description page of Project Settings.


#include "NonPlayerActorBase.h"

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
