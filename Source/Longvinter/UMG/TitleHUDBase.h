// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "TitleBase.h"
#include "Blueprint/UserWidget.h"
#include "TitleHUDBase.generated.h"

/**
 * 
 */
UCLASS()
class LONGVINTER_API UTitleHUDBase : public UUserWidget
{
	GENERATED_BODY()
	
public:
	virtual void NativeConstruct() override;
	virtual void NativeTick(const FGeometry& _geo, float _DeltaTime) override;

	UTitleBase* GetTitleWidget() { return mTitle; }

public:
	UTitleBase* mTitle;
};
