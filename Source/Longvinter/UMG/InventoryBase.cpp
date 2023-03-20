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
		// ������ ���̺��� ItemID�� ������ ���� ��������
		FItemTable* ItemInfo = ItemTable->FindRow<FItemTable>(FName(FString::FromInt(ItemID)), nullptr);

		if (ItemInfo->ItemType == EItemType::Normal)
			return;
		else if (ItemInfo->ItemType == EItemType::Food)
		{
			// �������� ���� ����Ʈ�� ������ ���� ���� ���� �˾Ƴ���
			int32 BuffCount = ItemInfo->BuffList.Num();

			// ���� ������ŭ �ݺ� ������
			if (0 != BuffCount)
			{
				for (int i = 0; i < BuffCount; i++)
				{
					int32 BuffID = ItemInfo->BuffList[i]; // �������̺��� ã�� ID�� �˾Ƴ���
					UDataTable* BuffTable = UInventory::GetInst(GetWorld())->GetBuffTable(); // ���� ���̺� ��������
					FBuffTable* BuffInfo = BuffTable->FindRow<FBuffTable>(FName(FString::FromInt(BuffID)), nullptr); // ���� ���̺� BuffID�� �־ ���� ��������

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
