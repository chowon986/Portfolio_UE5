// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <Components\ProgressBar.h>

#include "../GameInfo.h"
#include "Blueprint/UserWidget.h"
#include "PlayerInfoBase.generated.h"

/**
 * 
 */
UCLASS()
class LONGVINTER_API UPlayerInfoBase : public UUserWidget
{
	GENERATED_BODY()
	
private:
	UProgressBar* mHPBar;

public:
	virtual void NativeConstruct() override;
	virtual void NativeTick(const FGeometry& _geo, float _DeltaTime) override;
};