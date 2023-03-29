// Fill out your copyright notice in the Description page of Project Settings.


#include "RandomBoxItem.h"
#include "ItemDataBase.h"
#include "../Character/LvPlayer.h"
#include "../Component/Placeholder.h"

void URandomBoxItem::NativeConstruct()
{
	Super::NativeConstruct();
	mIconImg = Cast<UImage>(GetWidgetFromName(FName(TEXT("Icon"))));
	mEatIconImg = Cast<UImage>(GetWidgetFromName(FName(TEXT("EatIcon"))));
	mEatIconImg->SetVisibility(ESlateVisibility::Collapsed);
}

void URandomBoxItem::NativeTick(const FGeometry& _geo, float _DeltaTime)
{
	Super::NativeTick(_geo, _DeltaTime);

}

void URandomBoxItem::InitFromData(UObject* _Data)
{
	UItemDataBase* pData = Cast<UItemDataBase>(_Data);

	if (IsValid(pData))
	{
		const FString& IconPath = pData->GetItemIconPath();
		EItemType Type = pData->GetItemType();

		UTexture2D* pTex2D = LoadObject<UTexture2D>(nullptr, *IconPath);
		if (IsValid(pTex2D))
		{
			mIconImg->SetBrushFromTexture(pTex2D);

			if (Type == EItemType::Food)
				mEatIconImg->SetVisibility(ESlateVisibility::Visible);
			else
				mEatIconImg->SetVisibility(ESlateVisibility::Collapsed);
		}
	}
}

