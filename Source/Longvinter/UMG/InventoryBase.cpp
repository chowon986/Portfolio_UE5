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
}

void UInventoryBase::NativeTick(const FGeometry& _geo, float _DeltaTime)
{
	Super::NativeTick(_geo, _DeltaTime);

	if (OnceCheck == false)
	{
		APlayerController* Controller = GetOwningPlayer();
		ALvPlayer* Character = Cast<ALvPlayer>(Controller->GetCharacter());
		if (IsValid(Character))
		{
			UInventoryComponent* Component = Character->GetInventoryComponent();
			Component->OnItemsChangedEvent.AddUObject(this, &UInventoryBase::OnItemsChanged);
			OnItemsChanged(Component->GetItems());
			OnceCheck = true;
			mTileView->OnItemDoubleClicked().AddUObject(this, &UInventoryBase::ItemClick);
		}
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
	UItemDataBase* pData = Cast<UItemDataBase>(Object);


	if (IsValid(pData))
	{
		int ItemID = pData->GetItemID();
		UDataTable* ItemTable = UInventory::GetInst(GetWorld())->GetItemTable();
		// 아이템 테이블에서 ItemID로 아이템 정보 가져오기
		FItemTable* ItemInfo = ItemTable->FindRow<FItemTable>(FName(FString::FromInt(ItemID)), nullptr);

		if (ItemInfo->ItemType == EItemType::Normal)
			return;
		else if (ItemInfo->ItemType == EItemType::Food)
		{
			// 아이템의 버프 리스트의 개수를 통해 버프 개수 알아내기
			int32 BuffCount = ItemInfo->BuffList.Num();

			// 버프 개수만큼 반복 돌리기
			if (0 != BuffCount)
			{
				for (int i = 0; i < BuffCount; i++)
				{
					int32 BuffID = ItemInfo->BuffList[i]; // 버프테이블에서 찾을 ID값 알아내기
					UDataTable* BuffTable = UInventory::GetInst(GetWorld())->GetBuffTable(); // 버프 테이블 가져오기
					FBuffTable* BuffInfo = BuffTable->FindRow<FBuffTable>(FName(FString::FromInt(BuffID)), nullptr); // 버프 테이블에 BuffID값 넣어서 정보 가져오기

					if (BuffInfo->BuffType == EBuffType::HP)
					{
						APlayerController* Controller = GetOwningPlayer();
						ACharacterBase* Character = Cast<ACharacterBase>(Controller->GetCharacter());
						Character->SetCurrentHealth(Character->GetCurrentHealth() + BuffInfo->Amount);
					}
				}
			}
		}
		else if (ItemInfo->ItemType == EItemType::Equipment)
		{

		}
		else if (ItemInfo->ItemType == EItemType::Decorative)
		{

		}
	}
}
