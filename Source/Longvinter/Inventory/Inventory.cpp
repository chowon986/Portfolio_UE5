// Fill out your copyright notice in the Description page of Project Settings.


#include "Inventory.h"
#include "../LvGameInstance.h"
#include "../LongvinterGameModeBase.h"
#include "../UMG/MainHUDBase.h"
#include "../UMG/InventoryBase.h"
#include "../UMG/ItemDataBase.h"

UWorld* UInventory::mCurWorld = nullptr;


UInventory::UInventory()
{
}

UInventory::~UInventory()
{
}

UInventory* UInventory::GetInst(UWorld* _World)
{
	mCurWorld = _World;

	ULvGameInstance* GameInstance = Cast<ULvGameInstance>(UGameplayStatics::GetGameInstance(mCurWorld));

	if (nullptr == GameInstance->mInventory)
	{
		GameInstance->mInventory = NewObject<UInventory>();
		GameInstance->mInventory->AddToRoot();
	}
	
	return GameInstance->mInventory;
}

UInventory* UInventory::GetInst(UGameInstance* _GameInst)
{
	ULvGameInstance* GameInstance = Cast<ULvGameInstance>(_GameInst);

	if (nullptr == GameInstance->mInventory)
	{
		GameInstance->mInventory = NewObject<UInventory>();
		GameInstance->mInventory->AddToRoot();
	}

	return GameInstance->mInventory;
}

void UInventory::SetItemTable(UDataTable* Table)
{
	mItemTable = Table;
}

void UInventory::UpdateItems(TArray<int32> Items)
{
	for (int32 Item : Items)
	{
		FItemTable* Table = GetInfoItem(Item);
		UItemDataBase* pNewData = NewObject<UItemDataBase>();
		pNewData->SetItemIconPath(Table->TexturePath);
		pNewData->SetItemID(Item);
		pNewData->SetItemType(Table->ItemType);
		pNewData->SetItemName(Table->ItemName.ToString());
		pNewData->SetItemDesc(Table->TextDescription);
	}
}

FItemTable* UInventory::GetInfoItem(int ItemID)
{
	FItemTable* ItemInfo = mItemTable->FindRow<FItemTable>(FName(FString::FromInt(ItemID)), nullptr);

	return ItemInfo;
}
