// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "GameFramework/PlayerController.h"
#include "LvPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class LONGVINTER_API ALvPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	ALvPlayerController();
protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
	virtual void SetupInputComponent();
	virtual void PostInitializeComponents() override;

protected:
	virtual void OnPossess(APawn* aPawn) override;
	virtual void OnUnPossess() override;

public:
	void Click();
};
