// Fill out your copyright notice in the Description page of Project Settings.


#include "CampFireBase.h"
#include "../Inventory/Inventory.h"
#include "ItemDataBase.h"
#include "../Character/LvPlayer.h"

UTileView* UCampFireBase::mCampFireTileView = nullptr;

void UCampFireBase::NativeConstruct()
{
	Super::NativeConstruct();
	OnceCheck = false;
	mCampFireTileView = Cast<UTileView>(GetWidgetFromName(FName(TEXT("CampFireTileView"))));
	{
		// �̹��� �ε� �� �Ǵ��� �׽�Ʈ �ڵ�
		FItemTable* Table = UInventory::GetInst(GetGameInstance())->GetInfoItem(1);
		UItemDataBase* pNewData = NewObject<UItemDataBase>();
		pNewData->SetItemIconPath(Table->TexturePath);
		pNewData->SetItemDescription(Table->Description);

		mCampFireTileView->AddItem(pNewData);
	}
}

void UCampFireBase::NativeTick(const FGeometry& _geo, float _DeltaTime)
{
	Super::NativeTick(_geo, _DeltaTime);
}