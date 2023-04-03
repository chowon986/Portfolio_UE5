// Fill out your copyright notice in the Description page of Project Settings.


#include "RandomBoxBase.h"
#include "../Character/LvPlayer.h"
#include "../Character/LvPlayerController.h"
#include "../Component/Placeholder.h"
#include "../Component/InventoryComponent.h"
#include "../Component/EncyclopediaComponent.h"
#include "ItemDataBase.h"
#include "../Inventory/Inventory.h"

void URandomBoxBase::NativeConstruct()
{
	Super::NativeConstruct();
	mRandomBoxTileView = Cast<UTileView>(GetWidgetFromName(FName(TEXT("RandomBoxTileView"))));
	mRandomBoxTileView->OnItemClicked().AddUObject(this, &URandomBoxBase::ItemClick);

	mInventoryTileView = Cast<UTileView>(GetWidgetFromName(FName(TEXT("InventoryTileView"))));

	mOnceCheck = false;
	mRandomBox = nullptr;
}

void URandomBoxBase::NativeTick(const FGeometry& _geo, float _DeltaTime)
{
	Super::NativeTick(_geo, _DeltaTime);

	if (mRandomBox)
	{
		if (!mOnceCheck)
		{
			mRandomBox->GetRandomBoxComponent()->OnItemsChangedEvent.AddUObject(this, &URandomBoxBase::OnRandomBoxItemsChanged);
			OnRandomBoxItemsChanged(mRandomBox->GetRandomBoxComponent()->GetItems());

			APlayerController* Controller = GetOwningLocalPlayer()->GetPlayerController(GetWorld());
			ALvPlayer* Character = Cast<ALvPlayer>(Controller->GetCharacter());
			UInventoryComponent* InventoryComponent = Character->GetInventoryComponent();
			InventoryComponent->OnItemsChangedEvent.AddUObject(this, &URandomBoxBase::OnInventoryItemsChanged);

			OnInventoryItemsChanged(InventoryComponent->GetItems());

			mOnceCheck = true;
		}
	}
}

void URandomBoxBase::ItemClick(UObject* Object)
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
				mRandomBox->GetRandomBoxComponent()->ServerRemoveItem(ItemID);
			}
		}
	}
}

void URandomBoxBase::OnRandomBoxItemsChanged(TArray<int32> Items)
{
	mRandomBoxTileView->ClearListItems();

	for (int32 Item : Items)
	{
		FItemTable* Table = UInventory::GetInst(GetGameInstance())->GetInfoItem(Item);
		UItemDataBase* pNewData = NewObject<UItemDataBase>();
		pNewData->SetItemIconPath(Table->TexturePath);
		pNewData->SetItemID(Item);
		pNewData->SetItemType(Table->ItemType);
		pNewData->SetItemName(Table->ItemName.ToString());
		pNewData->SetItemDesc(Table->TextDescription);

		mRandomBoxTileView->AddItem(pNewData);
	}
}

void URandomBoxBase::OnInventoryItemsChanged(TArray<int32> Items)
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

void URandomBoxBase::ServerSetRandomBox_Implementation(AFarmingBox* Box)
{
	mRandomBox = Box;
}

