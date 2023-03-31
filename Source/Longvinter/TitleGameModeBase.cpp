// Fill out your copyright notice in the Description page of Project Settings.


#include "TitleGameModeBase.h"

ATitleGameModeBase::ATitleGameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ATitleGameModeBase::BeginPlay()
{
	Super::BeginPlay();
}

void ATitleGameModeBase::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);

}

void ATitleGameModeBase::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);

}

void ATitleGameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
