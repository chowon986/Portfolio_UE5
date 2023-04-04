// Fill out your copyright notice in the Description page of Project Settings.


#include "CraftTableBase.h"
#include "ItemDataBase.h"
#include "../Inventory/Inventory.h"
#include "CraftTableItemBase.h"

void UCraftTableBase::NativeConstruct()
{
	Super::NativeConstruct();

	mListView = Cast<UListView>(GetWidgetFromName(FName(TEXT("ListView"))));

	mOnceCheck = false;
}

void UCraftTableBase::NativeTick(const FGeometry& _geo, float _DeltaTime)
{
	Super::NativeTick(_geo, _DeltaTime);

	if (mOnceCheck == false)
	{
		mOnceCheck = true;

		FItemTable* Table = UInventory::GetInst(GetGameInstance())->GetInfoItem(104);
		UItemDataBase* pNewData = NewObject<UItemDataBase>();
		pNewData->SetItemIconPath(Table->TexturePath);

		mListView->AddItem(pNewData);
	}
}
