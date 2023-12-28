// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "../UMG/InventoryBase.h"
#include "../UMG/SgtLakeVenderBase.h"
#include "../UMG/InventoryItemBase.h"
#include "../UMG/CampFireBase.h"
#include "../UMG/EquipmentBase.h"
#include "../UMG/PlaceholderBase.h"
#include "../UMG/RandomBoxBase.h"
#include "../UMG/EncyclopediaBase.h"
#include "../UMG/CraftTableBase.h"
#include "../UMG/EncyclopediaBookBase.h"
#include "Blueprint/UserWidget.h"
#include "MainHUDBase.generated.h"

/**
 * 
 */
UCLASS()
class LONGVINTER_API UMainHUDBase : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;
	virtual void NativeTick(const FGeometry& _geo, float _DeltaTime) override;

	UInventoryBase* GetInventoryWidget() { return mInventory; }
	USgtLakeVenderBase* GetVendorWidget() { return mSgtLakeVendor; }
	UUserWidget* GetCampFireWidget() { return mCampFire; }
	UEquipmentBase* GetEquipmentWidget() { return mEquipment; }
	UPlaceholderBase* GetPlaceholderWidget() { return mPlaceholder; }
	URandomBoxBase* GetRandomBoxWidget() { return mRandomBox; }
	UEncyclopediaBase* GetEncyclopediaWidget() { return mEncyclopedia; }
	UCraftTableBase* GetCraftTableWidget() { return mCraftTable; }
	UEncyclopediaBookBase* GetEncyclopediaBookWidget() { return mEncyclopediaBook; }

private:
	void OnActorClicked(AActor* Actor);
	void OnInventoryOnOff();

private:
	UInventoryBase* mInventory;
	USgtLakeVenderBase* mSgtLakeVendor;
	UInventoryItemBase* mItemIcon;
	UUserWidget* mCampFire;
	UEquipmentBase* mEquipment;
	UPlaceholderBase* mPlaceholder;
	URandomBoxBase* mRandomBox;
	UEncyclopediaBase* mEncyclopedia;
	UCraftTableBase* mCraftTable;
	UEncyclopediaBookBase* mEncyclopediaBook;

	bool mOnceCheck;
	int32 mPrevTime;

	//UPROPERTY(meta = (BindWidgetAnim), Transient)
	//UWidgetAnimation* IConHoverAnimation;
};