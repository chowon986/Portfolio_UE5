// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "PlayerInfoBase.h"
#include "../UMG/InventoryBase.h"
#include "../UMG/SgtLakeVenderBase.h"
#include "../UMG/InventoryItemBase.h"
#include "../UMG/CampFireBase.h"
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
	UCampFireBase* GetCampFireWidget() { return mCampFire; }

	UFUNCTION()
		void OnItemIconHovered();

private:
	UPlayerInfoBase* mPlayerInfo;
	UInventoryBase* mInventory;
	USgtLakeVenderBase* mSgtLakeVendor;
	UInventoryItemBase* mItemIcon;
	UCampFireBase* mCampFire;

	//UPROPERTY(meta = (BindWidgetAnim), Transient)
	//UWidgetAnimation* IConHoverAnimation;
};