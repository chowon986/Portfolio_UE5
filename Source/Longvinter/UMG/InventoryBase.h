// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include <Components/TileView.h>
#include <Components\TextBlock.h>
#include "Blueprint/UserWidget.h"
#include "InventoryBase.generated.h"

/**
 * 
 */
UCLASS()
class LONGVINTER_API UInventoryBase : public UUserWidget
{
	GENERATED_BODY()
	
public:
	virtual void NativeConstruct() override;
	virtual void NativeTick(const FGeometry& _geo, float _DeltaTime) override;

	void OnItemsChanged(TArray<int32> Items);


	void ItemClick(UObject* Object);

private:
	bool OnceCheck;

public:
	static UTileView* mTileView;
	UTextBlock* mMKTxt;
	int32 mBeforeMK;
};
