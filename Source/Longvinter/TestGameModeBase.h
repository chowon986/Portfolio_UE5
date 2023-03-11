// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <Blueprint\UserWidget.h>

#include "GameInfo.h"
#include "GameFramework/GameModeBase.h"
#include "TestGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class LONGVINTER_API ATestGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	ATestGameModeBase();

private:
	TSubclassOf<UUserWidget>	mTestHUDClass;
	UUserWidget* mTestHUD;
	
public:
	virtual void BeginPlay()	override;
	virtual void Tick(float DeltaTime)	override;
};
