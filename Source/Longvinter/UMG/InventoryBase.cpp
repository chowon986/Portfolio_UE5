// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryBase.h"
#include "ItemDataBase.h"
#include "../Character/LvPlayer.h"
#include "../Inventory/Inventory.h"
#include "../Component/InventoryComponent.h"

UTileView* UInventoryBase::mTileView = nullptr;


void UInventoryBase::NativeConstruct()
{
	Super::NativeConstruct();
	OnceCheck = false;
	mTileView = Cast<UTileView>(GetWidgetFromName(FName(TEXT("TileView"))));
	mMKTxt = Cast<UTextBlock>(GetWidgetFromName(FName(TEXT("TTLMK"))));
	mBeforeMK = 0;
}

void UInventoryBase::NativeTick(const FGeometry& _geo, float _DeltaTime)
{
	Super::NativeTick(_geo, _DeltaTime);

	APlayerController* Controller = GetOwningPlayer();
	ALvPlayer* Character = Cast<ALvPlayer>(Controller->GetCharacter());
	if (OnceCheck == false)
	{
		if (IsValid(Character))
		{
			UInventoryComponent* Component = Character->GetInventoryComponent();
			Component->OnItemsChangedEvent.AddUObject(this, &UInventoryBase::OnItemsChanged);
			OnItemsChanged(Component->GetItems());
			OnceCheck = true;
			mTileView->OnItemDoubleClicked().AddUObject(this, &UInventoryBase::ItemClick);
			mMKTxt->SetText(FText::FromString(FString::FromInt(Character->GetMK())));
		}
	}

	if (mBeforeMK != Character->GetMK())
	{
		mMKTxt->SetText(FText::FromString(FString::FromInt(Character->GetMK())));
	}
}

void UInventoryBase::OnItemsChanged(TArray<int32> Items)
{
	mTileView->ClearListItems();

	for (int32 Item : Items)
	{
		FItemTable* Table = UInventory::GetInst(GetGameInstance())->GetInfoItem(Item);
		UItemDataBase* pNewData = NewObject<UItemDataBase>();
		pNewData->SetItemIconPath(Table->TexturePath);
		pNewData->SetItemID(Item);

		mTileView->AddItem(pNewData);
	}
}

void UInventoryBase::ItemClick(UObject* Object)
{
	APlayerController* Controller = GetOwningPlayer();
	
	if (IsValid(Controller))
	{
		ALvPlayer* Character = Cast<ALvPlayer>(Controller->GetCharacter());
		if (IsValid(Character))
		{
			UItemDataBase* pData = Cast<UItemDataBase>(Object);

			if (IsValid(pData))
			{
				int ItemID = pData->GetItemID();
				Character->GetInventoryComponent()->ServerUseItem(ItemID);
			}
		}
	}
}
