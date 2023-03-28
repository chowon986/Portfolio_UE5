// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include <Components/TileView.h>
#include <Components/TextBlock.h>
#include <Components/Button.h>
#include "Blueprint/UserWidget.h"
#include "EquipmentBase.generated.h"

/**
 * 
 */
UCLASS()
class LONGVINTER_API UEquipmentBase : public UUserWidget
{
	GENERATED_BODY()
	
public:
	virtual void NativeConstruct() override;
	virtual void NativeTick(const FGeometry& _geo, float _DeltaTime) override;

	UFUNCTION()
	void ClickInventory();

	void OnItemsChanged(TArray<int32> Items);
	void OnAmmoChanged(int32 AmmoCount);
	void OnMKChanged(int32 MK);
	void ItemClick(UObject* Object);

public:
	UTileView* mTileView;
	UTextBlock* mMKTxt;
	UTextBlock* mAmmoCount;
	bool OnceCheck;
	UButton* mInventoryBtn;
};
