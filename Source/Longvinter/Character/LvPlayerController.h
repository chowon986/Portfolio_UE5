// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "../UMG/MainHUDBase.h"
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
	void UseTool();
	void SetMainHUD(UMainHUDBase* MainHUD) { m_MainHUD = MainHUD; }
	UMainHUDBase* GetMainHUD() { return m_MainHUD; }
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Component, meta = (AllowPrivateAccess = true))
		TSubclassOf<UUserWidget>	m_StartHUDClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Component, meta = (AllowPrivateAccess = true))
		UUserWidget* m_StartHUD;

	UMainHUDBase* m_MainHUD;

private:
	TSubclassOf<UUserWidget>	m_MainHUDClass;
};
