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
		pNewData->SetItemType(Table->ItemType);

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
		pNewData->SetItemType(Table->ItemType);

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
		pNewData->SetItemType(Table->ItemType);

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
		pNewData->SetItemType(Table->ItemType);

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
		pNewData->SetItemType(Table->ItemType);

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
		pNewData->SetItemType(Table->ItemType);

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
		pNewData->SetItemType(Table->ItemType);

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
		pNewData->SetItemType(Table->ItemType);

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
		pNewData->SetItemType(Table->ItemType);

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
		pNewData->SetItemType(Table->ItemType);

		m_ListView->AddItem(pNewData);
	}
}

void USgtLakeVenderBase::NativeTick(const FGeometry& _geo, float _DeltaTime)
{
	Super::NativeTick(_geo, _DeltaTime);
}

void USgtLakeVenderBase::ItemClick(UObject* Object)
{
	ALvPlayerController* Controller = Cast<ALvPlayerController>(GetOwningLocalPlayer()->GetPlayerController(GetWorld()));
	ALvPlayer* LvPlayer = Cast<ALvPlayer>(Controller->GetCharacter());

	if (IsValid(Controller))
	{
		UItemDataBase* pData = Cast<UItemDataBase>(Object);

		if (IsValid(pData))
		{
			if (pData->GetItemDescriptionLeft() == "0") // ÆÇ¸Å
			{
				LvPlayer->GetInventoryComponent()->ServerSellItem(pData->GetItemID());
			}
			else
			{
				LvPlayer->GetInventoryComponent()->ServerBuyItem(pData->GetItemID());
			}
		}
	}
}
