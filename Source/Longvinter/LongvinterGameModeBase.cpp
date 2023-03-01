// Copyright Epic Games, Inc. All Rights Reserved.


#include "LongvinterGameModeBase.h"
#include "Character/LvPlayer.h"
#include "Character/LvPlayerController.h"

ALongvinterGameModeBase::ALongvinterGameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;
	DefaultPawnClass = ALvPlayer::StaticClass();
	PlayerControllerClass = ALvPlayerController::StaticClass();
}

void ALongvinterGameModeBase::BeginPlay()
{
	Super::BeginPlay();

}

void ALongvinterGameModeBase::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);

}

void ALongvinterGameModeBase::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);

}

void ALongvinterGameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
