// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameInfo.h"
#include "GameFramework/GameModeBase.h"
#include "TitleGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class LONGVINTER_API ATitleGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	ATitleGameModeBase();

public:
	virtual void BeginPlay()	override;
	virtual void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage);
	virtual void PostLogin(APlayerController* NewPlayer);
	virtual void Tick(float DeltaTime)	override;
};
