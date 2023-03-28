// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include <Components\Image.h>
#include "Blueprint/UserWidget.h"
#include "EquipmentItemBase.generated.h"

/**
 * 
 */
UCLASS()
class LONGVINTER_API UEquipmentItemBase : public UUserWidget
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
};
