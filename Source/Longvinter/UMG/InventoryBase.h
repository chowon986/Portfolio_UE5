// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include <Components/TileView.h>
#include <Components/TextBlock.h>
#include <Components/Button.h>
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
	void OnMKChanged(int32 MK);

	UFUNCTION()
	void OnIsHoveredChanged(UObject* Item, bool bIsHovered);

	UFUNCTION()
	void ClickEquipment();

	UFUNCTION()
	void ClickEncyclopediaBook();

	void ItemClick(UObject* Object);
	// 마우스 우클릭

private:
	bool OnceCheck;

public:
	UTileView* mTileView;
	UTextBlock* mMKTxt;
	UButton* mEquipmentBtn;
	UButton* mEncyclopediaBookBtn;
};
