// Fill out your copyright notice in the Description page of Project Settings.


#include "PlaceholderBase.h"
#include "../Character/LvPlayer.h"
#include "../Character/LvPlayerController.h"
#include "../Component/Placeholder.h"
#include "../Component/InventoryComponent.h"
#include "../Component/EncyclopediaComponent.h"
#include "ItemDataBase.h"
#include "../Inventory/Inventory.h"

UTileView* UPlaceholderBase::mPlaceholderTileView = nullptr;
UTileView* UPlaceholderBase::mInventoryTileView = nullptr;


void UPlaceholderBase::NativeConstruct()
{
	Super::NativeConstruct();
	mPlaceholderTileView = Cast<UTileView>(GetWidgetFromName(FName(TEXT("PlaceholderTileView"))));
	mPlaceholderTileView->OnItemClicked().AddUObject(this, &UPlaceholderBase::ItemClick);

	mInventoryTileView = Cast<UTileView>(GetWidgetFromName(FName(TEXT("InventoryTileView"))));

	mOnceCheck = false;

	//mPlaceholderComponent = nullptr;
	mPlaceholder = nullptr;
}

void UPlaceholderBase::NativeTick(const FGeometry& _geo, float _DeltaTime)
{
	Super::NativeTick(_geo, _DeltaTime);

	//if (mPlaceholderComponent)
	if (mPlaceholder)
	{
		if (!mOnceCheck)
		{
			mPlaceholder->GetPlaceholderComponent()->OnItemsChangedEvent.AddUObject(this, &UPlaceholderBase::OnPlaceholderItemsChanged);
			//mPlaceholderComponent->OnItemsChangedEvent.AddUObject(this, &UPlaceholderBase::OnPlaceholderItemsChanged);
			OnPlaceholderItemsChanged(mPlaceholder->GetPlaceholderComponent()->GetItems());
			//OnPlaceholderItemsChanged(mPlaceholderComponent->GetItems());

			APlayerController* Controller = GetOwningLocalPlayer()->GetPlayerController(GetWorld());
			ALvPlayer* Character = Cast<ALvPlayer>(Controller->GetCharacter());
			UInventoryComponent* InventoryComponent = Character->GetInventoryComponent();
			InventoryComponent->OnItemsChangedEvent.AddUObject(this, &UPlaceholderBase::OnInventoryItemsChanged);

			OnInventoryItemsChanged(InventoryComponent->GetItems());

			mOnceCheck = true;
		}

		//if (0 == mPlaceholderComponent->GetItems().Num())
		{
			// Timer 세팅
			// 시간이 일정시간 이상 흐르면 삭제
		}
	}
}

void UPlaceholderBase::ItemClick(UObject* Object)
{
	APlayerController* Controller = GetOwningLocalPlayer()->GetPlayerController(GetWorld());

	if (IsValid(Controller))
	{
		ALvPlayer* Character = Cast<ALvPlayer>(Controller->GetCharacter());
		if (IsValid(Character))
		{
			UItemDataBase* pData = Cast<UItemDataBase>(Object);

			if (IsValid(pData))
			{
				int ItemID = pData->GetItemID();

				Character->GetInventoryComponent()->ServerAddItem(ItemID);
				Character->GetEncyclopediaComponent()->ServerAddItem(ItemID);
				mPlaceholder->ServerRemoveItem(ItemID);
			}
		}
	}
}

void UPlaceholderBase::OnPlaceholderItemsChanged(TArray<int32> Items)
{
	mPlaceholderTileView->ClearListItems();

	for (int32 Item : Items)
	{
		FItemTable* Table = UInventory::GetInst(GetGameInstance())->GetInfoItem(Item);
		UItemDataBase* pNewData = NewObject<UItemDataBase>();
		pNewData->SetItemIconPath(Table->TexturePath);
		pNewData->SetItemID(Item);
		pNewData->SetItemType(Table->ItemType);
		pNewData->SetItemName(Table->ItemName.ToString());
		pNewData->SetItemDesc(Table->TextDescription);

		mPlaceholderTileView->AddItem(pNewData);
	}
}

void UPlaceholderBase::OnInventoryItemsChanged(TArray<int32> Items)
{
	mInventoryTileView->ClearListItems();

	for (int32 Item : Items)
	{
		FItemTable* Table = UInventory::GetInst(GetGameInstance())->GetInfoItem(Item);
		UItemDataBase* pNewData = NewObject<UItemDataBase>();
		pNewData->SetItemIconPath(Table->TexturePath);
		pNewData->SetItemID(Item);
		pNewData->SetItemType(Table->ItemType);
		pNewData->SetItemName(Table->ItemName.ToString());
		pNewData->SetItemDesc(Table->TextDescription);

		mInventoryTileView->AddItem(pNewData);
	}
}
