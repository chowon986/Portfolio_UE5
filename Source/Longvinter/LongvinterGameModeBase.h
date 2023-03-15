// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UMG/MainHUDBase.h"
#include <Blueprint/UserWidget.h>
#include "GameFramework/GameModeBase.h"
#include "LongvinterGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class LONGVINTER_API ALongvinterGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	ALongvinterGameModeBase();
	
public:
	virtual void BeginPlay()	override;
	virtual void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage);
	virtual void PostLogin(APlayerController* NewPlayer);
	virtual void Tick(float DeltaTime)	override;

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
