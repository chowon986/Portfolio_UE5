// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <Components\Image.h>

#include "../GameInfo.h"
#include "Blueprint/UserWidget.h"
#include "InventoryItemBase.generated.h"

/**
 * 
 */
UCLASS()
class LONGVINTER_API UInventoryItemBase : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;
	virtual void NativeTick(const FGeometry& _geo, float _DeltaTime) override;

public:
	UFUNCTION(BlueprintCallable)
		void InitFromData(UObject* _Data);

private:
	UImage* m_IconImg;
};
