// Fill out your copyright notice in the Description page of Project Settings.


#include "SgtLakeVenderBase.h"
#include "../Inventory/Inventory.h"
#include "../Character/LvPlayer.h"
#include <Components/TileView.h>
#include "../Character/LvPlayerController.h"
#include "../Component/InventoryComponent.h"
#include "ItemDataBase.h"


void USgtLakeVenderBase::NativeConstruct()
{
	Super::NativeConstruct();

	m_ListView = Cast<UListView>(GetWidgetFromName(FName(TEXT("ListView"))));
	m_ListView->OnItemDoubleClicked().AddUObject(this, &USgtLakeVenderBase::ItemClick);

	{
		FItemTable* Table = UInventory::GetInst(GetGameInstance())->GetInfoItem(412);
		UItemDataBase* pNewData = NewObject<UItemDataBase>();

		pNewData->SetItemIconPath(Table->TexturePath);
		pNewData->SetItemIconPathRight(Table->TexturePath);
		pNewData->SetItemDescription("0");
		pNewData->SetItemDescriptionLeft(Table->Description);
		pNewData->SetItemID(412);

		m_ListView->AddItem(pNewData);
	}

	{
		FItemTable* Table = UInventory::GetInst(GetGameInstance())->GetInfoItem(1);
		UItemDataBase* pNewData = NewObject<UItemDataBase>();

		pNewData->SetItemIconPath(Table->TexturePath);
		pNewData->SetItemIconPathRight(Table->TexturePath);
		pNewData->SetItemDescription(Table->Description);
		pNewData->SetItemDescriptionLeft("0");
		pNewData->SetItemID(1);

		m_ListView->AddItem(pNewData);
	}
	{
		FItemTable* Table = UInventory::GetInst(GetGameInstance())->GetInfoItem(2);
		UItemDataBase* pNewData = NewObject<UItemDataBase>();

		pNewData->SetItemIconPath(Table->TexturePath);
		pNewData->SetItemIconPathRight(Table->TexturePath);
		pNewData->SetItemDescription(Table->Description);
		pNewData->SetItemDescriptionLeft("0");
		pNewData->SetItemID(2);

		m_ListView->AddItem(pNewData);
	}
	{
		FItemTable* Table = UInventory::GetInst(GetGameInstance())->GetInfoItem(3);
		UItemDataBase* pNewData = NewObject<UItemDataBase>();

		pNewData->SetItemIconPath(Table->TexturePath);
		pNewData->SetItemIconPathRight(Table->TexturePath);
		pNewData->SetItemDescription(Table->Description);
		pNewData->SetItemDescriptionLeft("0");
		pNewData->SetItemID(3);

		m_ListView->AddItem(pNewData);
	}
	{
		FItemTable* Table = UInventory::GetInst(GetGameInstance())->GetInfoItem(4);
		UItemDataBase* pNewData = NewObject<UItemDataBase>();

		pNewData->SetItemIconPath(Table->TexturePath);
		pNewData->SetItemIconPathRight(Table->TexturePath);
		pNewData->SetItemDescription(Table->Description);
		pNewData->SetItemDescriptionLeft("0");
		pNewData->SetItemID(4);

		m_ListView->AddItem(pNewData);
	}
	{
		FItemTable* Table = UInventory::GetInst(GetGameInstance())->GetInfoItem(9);
		UItemDataBase* pNewData = NewObject<UItemDataBase>();

		pNewData->SetItemIconPath(Table->TexturePath);
		pNewData->SetItemIconPathRight(Table->TexturePath);
		pNewData->SetItemDescription(Table->Description);
		pNewData->SetItemDescriptionLeft("0");
		pNewData->SetItemID(9);

		m_ListView->AddItem(pNewData);
	}
	{
		FItemTable* Table = UInventory::GetInst(GetGameInstance())->GetInfoItem(5);
		UItemDataBase* pNewData = NewObject<UItemDataBase>();

		pNewData->SetItemIconPath(Table->TexturePath);
		pNewData->SetItemIconPathRight(Table->TexturePath);
		pNewData->SetItemDescription(Table->Description);
		pNewData->SetItemDescriptionLeft("0");
		pNewData->SetItemID(5);

		m_ListView->AddItem(pNewData);
	}
	{
		FItemTable* Table = UInventory::GetInst(GetGameInstance())->GetInfoItem(6);
		UItemDataBase* pNewData = NewObject<UItemDataBase>();

		pNewData->SetItemIconPath(Table->TexturePath);
		pNewData->SetItemIconPathRight(Table->TexturePath);
		pNewData->SetItemDescription(Table->Description);
		pNewData->SetItemDescriptionLeft("0");
		pNewData->SetItemID(6);

		m_ListView->AddItem(pNewData);
	}
	{
		FItemTable* Table = UInventory::GetInst(GetGameInstance())->GetInfoItem(7);
		UItemDataBase* pNewData = NewObject<UItemDataBase>();

		pNewData->SetItemIconPath(Table->TexturePath);
		pNewData->SetItemIconPathRight(Table->TexturePath);
		pNewData->SetItemDescription(Table->Description);
		pNewData->SetItemDescriptionLeft("0");
		pNewData->SetItemID(7);

		m_ListView->AddItem(pNewData);
	}
	{
		FItemTable* Table = UInventory::GetInst(GetGameInstance())->GetInfoItem(8);
		UItemDataBase* pNewData = NewObject<UItemDataBase>();

		pNewData->SetItemIconPath(Table->TexturePath);
		pNewData->SetItemIconPathRight(Table->TexturePath);
		pNewData->SetItemDescription(Table->Description);
		pNewData->SetItemDescriptionLeft("0");
		pNewData->SetItemID(8);

		m_ListView->AddItem(pNewData);
	}
}

void USgtLakeVenderBase::NativeTick(const FGeometry& _geo, float _DeltaTime)
{
	Super::NativeTick(_geo, _DeltaTime);
}

void USgtLakeVenderBase::ItemClick(UObject* Object)
{
	ALvPlayerController* Controller = Cast<ALvPlayerController>(GetOwningPlayer());
	ALvPlayer* LvPlayer = Cast<ALvPlayer>(Controller->GetCharacter());

	if (IsValid(Controller))
	{
		UItemDataBase* pData = Cast<UItemDataBase>(Object);

		if (IsValid(pData))
		{
			if (pData->GetItemDescriptionLeft() == "0") // 판매
			{
				// 타일뷰에 이게 있는지 체크해야할거같은디
				TArray<int32> Items = LvPlayer->GetInventoryComponent()->GetItems();
				
				for (int32 Item : Items)
				{
					if (Item == pData->GetItemID())
					{
						Controller->GetMainHUD()->GetInventoryWidget()->mTileView->RemoveItem(pData);
						LvPlayer->ServerRemoveInventoryItem(pData->GetItemID());
						LvPlayer->SetMK(LvPlayer->GetMK() + FCString::Atoi(*(pData->GetItemDescription())));
						return;
					}
				}
			}
			else
			{
				if (LvPlayer->GetMK() >= FCString::Atoi(*(pData->GetItemDescriptionLeft())))
				{
					Controller->GetMainHUD()->GetInventoryWidget()->mTileView->AddItem(pData);
					LvPlayer->ServerAddInventoryItem(pData->GetItemID());
					int32 CurMK = LvPlayer->GetMK() - FCString::Atoi(*(pData->GetItemDescriptionLeft()));
					LvPlayer->SetMK(CurMK);
				}
			}
		}
	}
}
