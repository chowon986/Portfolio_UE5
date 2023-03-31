// Fill out your copyright notice in the Description page of Project Settings.


#include "EncyclopediaItemBase.h"
#include "ItemDataBase.h"

void UEncyclopediaItemBase::NativeConstruct()
{
	Super::NativeConstruct();

	mIconImg = Cast<UImage>(GetWidgetFromName(FName("Icon")));
	mItemName = Cast<UTextBlock>(GetWidgetFromName(FName("ItemName")));
	mItemDesc = Cast<UTextBlock>(GetWidgetFromName(FName("ItemDesc")));
	mExclamationImgRed = Cast<UImage>(GetWidgetFromName(FName("ExclamationRed")));
	mExclamationImgGreen = Cast<UImage>(GetWidgetFromName(FName("ExclamationGreen")));
	mExclamationImgRed->SetVisibility(ESlateVisibility::Collapsed);
	mExclamationImgGreen->SetVisibility(ESlateVisibility::Collapsed);
}

void UEncyclopediaItemBase::NativeTick(const FGeometry& _geo, float _DeltaTime)
{
	Super::NativeTick(_geo, _DeltaTime);
}

void UEncyclopediaItemBase::InitFromData(UObject* _Data)
{
	UItemDataBase* pData = Cast<UItemDataBase>(_Data);

	if (IsValid(pData))
	{
		const FString& IconPath = pData->GetItemIconPath();
		EItemType Type = pData->GetItemType();
		FString ItemName = pData->GetItemName();
		FString ItemDesc = pData->GetItemDesc();
		int32 ItemID = pData->GetItemID();

		UTexture2D* pTex2D = LoadObject<UTexture2D>(nullptr, *IconPath);
		if (IsValid(pTex2D))
		{
			mIconImg->SetBrushFromTexture(pTex2D);
			mItemName->SetText(FText::FromString(ItemName));
			mItemDesc->SetText(FText::FromString(ItemDesc));

			if (ItemID != 1000) // 새로운 아이템을 발견한게 아니면
			{
				mExclamationImgGreen->SetVisibility(ESlateVisibility::Visible);
				mExclamationImgRed->SetVisibility(ESlateVisibility::Collapsed);
			}
			else
			{
				mExclamationImgRed->SetVisibility(ESlateVisibility::Visible);
				mExclamationImgGreen->SetVisibility(ESlateVisibility::Collapsed);
			}
		}
	}
}
