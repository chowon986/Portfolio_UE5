// Fill out your copyright notice in the Description page of Project Settings.


#include "VendorBase.h"

AVendorBase::AVendorBase()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AVendorBase::BeginPlay()
{
	Super::BeginPlay();
}

void AVendorBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
