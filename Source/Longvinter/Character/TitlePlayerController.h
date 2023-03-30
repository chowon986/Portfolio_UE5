// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "../UMG/TitleHUDBase.h"
#include "GameFramework/PlayerController.h"
#include "TitlePlayerController.generated.h"

/**
 * 
 */
UCLASS()
class LONGVINTER_API ATitlePlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	ATitlePlayerController();

	UTitleHUDBase* GetTitleHUD() const { return mTitleHUD; }
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
	UPROPERTY()
	UTitleHUDBase* mTitleHUD;

private:
	TSubclassOf<UUserWidget>	mTitleHUDClass;
};
