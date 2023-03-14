// Fill out your copyright notice in the Description page of Project Settings.


#include "SgtLakeVenderBase.h"
#include "../Inventory/Inventory.h"
#include "ItemDataBase.h"


void USgtLakeVenderBase::NativeConstruct()
{
	Super::NativeConstruct();

	m_ListView = Cast<UListView>(GetWidgetFromName(FName(TEXT("ListView"))));
	{
		FItemTable* Table = UInventory::GetInst(GetGameInstance())->GetInfoItem(1);
		UItemDataBase* pNewData = NewObject<UItemDataBase>();
		pNewData->SetItemIconPath(Table->TexturePath);
		pNewData->SetItemDescription(Table->Description);

		m_ListView->AddItem(pNewData);
	}
	{
		FItemTable* Table = UInventory::GetInst(GetGameInstance())->GetInfoItem(1);
		UItemDataBase* pNewData = NewObject<UItemDataBase>();
		pNewData->SetItemIconPath(Table->TexturePath);
		pNewData->SetItemDescription(Table->Description);

		m_ListView->AddItem(pNewData);
	} {
		FItemTable* Table = UInventory::GetInst(GetGameInstance())->GetInfoItem(1);
		UItemDataBase* pNewData = NewObject<UItemDataBase>();
		pNewData->SetItemIconPath(Table->TexturePath);
		pNewData->SetItemDescription(Table->Description);

		m_ListView->AddItem(pNewData);
	}
}

void USgtLakeVenderBase::NativeTick(const FGeometry& _geo, float _DeltaTime)
{
	Super::NativeTick(_geo, _DeltaTime);
}