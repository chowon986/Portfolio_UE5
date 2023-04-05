// Fill out your copyright notice in the Description page of Project Settings.


#include "EncyclopediaBookListBase.h"
#include "ItemDataBase.h"
#include "../Inventory/Inventory.h"

void UEncyclopediaBookListBase::NativeConstruct()
{
	Super::NativeConstruct();
	mTileView = Cast<UTileView>(GetWidgetFromName(FName(TEXT("TileView"))));
	mTypeTxt = Cast<UTextBlock>(GetWidgetFromName(FName(TEXT("Type"))));
	mLeftCountTxt = Cast<UTextBlock>(GetWidgetFromName(FName(TEXT("LeftCount"))));
	mRightCountTxt = Cast<UTextBlock>(GetWidgetFromName(FName(TEXT("RightCount"))));
}

void UEncyclopediaBookListBase::NativeTick(const FGeometry& _geo, float _DeltaTime)
{
	Super::NativeTick(_geo, _DeltaTime);
}

void UEncyclopediaBookListBase::InitFromData(UObject* _Data)
{
	UItemDataBase* pData = Cast<UItemDataBase>(_Data);

	if (IsValid(pData))
	{
		const FString& Type = pData->GetItemName();
		const FString& LCount = pData->GetItemDescriptionLeft();
		const FString& RCount = pData->GetItemDescription();

		mTypeTxt->SetText(FText::FromString(Type));
		mLeftCountTxt->SetText(FText::FromString(LCount));
		mRightCountTxt->SetText(FText::FromString(RCount));

		TArray<int32> Items = pData->GetItemList();

		for (int32 Item : Items)
		{
			FItemTable* Table = UInventory::GetInst(GetGameInstance())->GetInfoItem(Item);

			UItemDataBase* pNewData = NewObject<UItemDataBase>();

			pNewData->SetItemIconPath(Table->TexturePath);
			pNewData->SetItemID(Item);

			mTileView->AddItem(pNewData);
		}
	}
}
