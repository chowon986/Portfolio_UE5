// Fill out your copyright notice in the Description page of Project Settings.


#include "LvPlayerController.h"

ALvPlayerController::ALvPlayerController()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ALvPlayerController::BeginPlay()
{
	Super::BeginPlay();
}

void ALvPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ALvPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
}

void ALvPlayerController::PostInitializeComponents()
{
	Super::PostInitializeComponents();
}

void ALvPlayerController::OnPossess(APawn* aPawn)
{
	Super::OnPossess(aPawn);
}

void ALvPlayerController::OnUnPossess()
{
	Super::OnUnPossess();
}
