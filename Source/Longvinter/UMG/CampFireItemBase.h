// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include <Components\Image.h>

#include "Blueprint/UserWidget.h"
#include "CampFireItemBase.generated.h"

/**
 * 
 */
UCLASS()
class LONGVINTER_API UCampFireItemBase : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;
	virtual void NativeTick(const FGeometry& _geo, float _DeltaTime) override;

public:
	UFUNCTION(BlueprintCallable)
		void InitFromData(UObject* _Data);

private:
	UImage* mIconImg;
	UImage* mEatImg;
};
