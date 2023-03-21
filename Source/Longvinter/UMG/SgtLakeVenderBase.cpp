// Fill out your copyright notice in the Description page of Project Settings.


#include "SgtLakeVenderBase.h"
#include "../Inventory/Inventory.h"
#include "../Character/LvPlayer.h"
#include "../Character/LvPlayerController.h"
#include "../Component/InventoryComponent.h"
#include "ItemDataBase.h"


void USgtLakeVenderBase::NativeConstruct()
{
	Super::NativeConstruct();

	m_ListView = Cast<UListView>(GetWidgetFromName(FName(TEXT("ListView"))));
	m_ListView->OnItemDoubleClicked().AddUObject(this, &USgtLakeVenderBase::ItemClick);

	{
		FItemTable* Table = UInventory::GetInst(GetGameInstance())->GetInfoItem(1);
		UItemDataBase* pNewData = NewObject<UItemDataBase>();
		pNewData->SetItemIconPath(Table->TexturePath);
		pNewData->SetItemDescription(Table->Description);
		pNewData->SetItemID(1);
		m_ListView->AddItem(pNewData);
	}
	{
		FItemTable* Table = UInventory::GetInst(GetGameInstance())->GetInfoItem(1);
		UItemDataBase* pNewData = NewObject<UItemDataBase>();
		pNewData->SetItemIconPath(Table->TexturePath);
		pNewData->SetItemDescription(Table->Description);
		pNewData->SetItemID(1);
		m_ListView->AddItem(pNewData);
	} {
		FItemTable* Table = UInventory::GetInst(GetGameInstance())->GetInfoItem(1);
		UItemDataBase* pNewData = NewObject<UItemDataBase>();
		pNewData->SetItemIconPath(Table->TexturePath);
		pNewData->SetItemDescription(Table->Description);
		pNewData->SetItemID(1);
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
			Controller->GetMainHUD()->GetInventoryWidget()->mTileView->AddItem(pData);
			LvPlayer->ServerAddInventoryItem(pData->GetItemID());
		}
	}
}
