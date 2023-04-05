// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include <Components/TileView.h>
#include <Components/TextBlock.h>
#include "Blueprint/UserWidget.h"
#include "EncyclopediaBookListBase.generated.h"

/**
 * 
 */
UCLASS()
class LONGVINTER_API UEncyclopediaBookListBase : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;
	virtual void NativeTick(const FGeometry& _geo, float _DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void InitFromData(UObject* _Data);

public:
	UTileView* mTileView;
	UTextBlock* mTypeTxt;
	UTextBlock* mLeftCountTxt;
	UTextBlock* mRightCountTxt;
};
