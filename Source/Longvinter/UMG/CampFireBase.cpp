// Fill out your copyright notice in the Description page of Project Settings.


#include "CampFireBase.h"
#include "../Inventory/Inventory.h"
#include "../Component/CraftComponent.h"
#include "ItemDataBase.h"
#include "../Character/LvPlayer.h"

UTileView* UCampFireBase::mCampFireTileView = nullptr;

void UCampFireBase::NativeConstruct()
{
	Super::NativeConstruct();
	OnceCheck = false;
	mCampFireTileView = Cast<UTileView>(GetWidgetFromName(FName(TEXT("CampFireTileView"))));
	mCampFireTileView->SetVisibility(ESlateVisibility::Collapsed);
}

void UCampFireBase::NativeTick(const FGeometry& _geo, float _DeltaTime)
{
	Super::NativeTick(_geo, _DeltaTime);

	APlayerController* Controller = GetOwningPlayer();
	ALvPlayer* Character = Cast<ALvPlayer>(Controller->GetCharacter());
	if (OnceCheck == false)
	{
		if (IsValid(Character))
		{
			UCraftComponent* Component = Character->GetCraftComponent();
			Component->OnItemsChangedEvent.AddUObject(this, &UCampFireBase::OnItemsChanged);
			OnItemsChanged(Component->GetCraftItems());
			OnceCheck = true;
		}
	}
}

void UCampFireBase::OnItemsChanged(TArray<int32> Items)
{
	mCampFireTileView->ClearListItems();

	for (int32 Item : Items)
	{
		FItemTable* Table = UInventory::GetInst(GetGameInstance())->GetInfoItem(Item);
		UItemDataBase* pNewData = NewObject<UItemDataBase>();
		pNewData->SetItemIconPath(Table->TexturePath);
		pNewData->SetItemID(Item);

		mCampFireTileView->AddItem(pNewData);
	}

	OnCheckCanCraft(Items);
}

void UCampFireBase::OnCheckCanCraft(TArray<int32> Items)
{

}
