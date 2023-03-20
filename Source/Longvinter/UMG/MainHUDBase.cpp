// Fill out your copyright notice in the Description page of Project Settings.


#include "MainHUDBase.h"

void UMainHUDBase::NativeConstruct()
{
	Super::NativeConstruct();

	mPlayerInfo = Cast<UPlayerInfoBase>(GetWidgetFromName(FName(TEXT("UIPlayerInfo"))));
	mInventory = Cast<UInventoryBase>(GetWidgetFromName(FName(TEXT("UIInventory"))));
	mInventory->SetVisibility(ESlateVisibility::Hidden);
	
	//mItemIcon = Cast<UInventoryItemBase>(GetWidgetFromName(FName(TEXT("InventoryItemIcon"))));

	mSgtLakeVendor = Cast< USgtLakeVenderBase>(GetWidgetFromName(FName(TEXT("SgtLakesKitchenVendor"))));
	mSgtLakeVendor->SetVisibility(ESlateVisibility::Hidden);
}

void UMainHUDBase::NativeTick(const FGeometry& _geo, float _DeltaTime)
{
	Super::NativeTick(_geo, _DeltaTime);

	//if (IsValid(mItemIcon))
	//{
	//	if (mItemIcon->IsHovered())
	//	{
	//		OnItemIconHovered();
	//	}
	//}
}

void UMainHUDBase::OnItemIconHovered()
{
	//PlayAnimation(IConHoverAnimation);
}
