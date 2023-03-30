// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameInfo.h"
#include <Blueprint\UserWidget.h>
#include "UMG/TitleHUDBase.h"
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
	virtual void Tick(float DeltaTime)	override;

private:
	TSubclassOf<UUserWidget> mTitleHUDClass;

	UTitleHUDBase* mTitleHUD;
};
