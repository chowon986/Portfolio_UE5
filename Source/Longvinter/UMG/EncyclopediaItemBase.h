// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include <Components/Image.h>
#include <Components/TextBlock.h>
#include "Blueprint/UserWidget.h"
#include "EncyclopediaItemBase.generated.h"

/**
 * 
 */
UCLASS()
class LONGVINTER_API UEncyclopediaItemBase : public UUserWidget
{
	GENERATED_BODY()
	
public:
	virtual void NativeConstruct() override;
	virtual void NativeTick(const FGeometry& _geo, float _DeltaTime) override;

public:
	UFUNCTION(BlueprintCallable)
		void InitFromData(UObject* _Data);

public:
	UImage* mIconImg;
	UTextBlock* mItemName;
	UTextBlock* mItemDesc;
	UImage* mExclamationImgRed;
	UImage* mExclamationImgGreen;
};