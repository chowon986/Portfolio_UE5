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

	UMainHUDBase* GetMainHUD() const { return m_MainHUD; }

protected:
	virtual void OnPossess(APawn* aPawn) override;
	virtual void OnUnPossess() override;

public:
	UPROPERTY()
	UMainHUDBase* m_MainHUD;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = true))
	TSubclassOf<UUserWidget> m_MainHUDClass;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = true))
		USoundBase* mBGM;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = true))
		UAudioComponent* mAudio;
};
