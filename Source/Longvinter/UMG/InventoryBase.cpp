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

		mTileView->AddItem(pNewData);
	}
}
