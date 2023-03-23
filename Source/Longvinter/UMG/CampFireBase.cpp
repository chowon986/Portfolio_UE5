// Fill out your copyright notice in the Description page of Project Settings.


#include "CampFireBase.h"
#include "../Inventory/Inventory.h"
#include "../Component/CraftComponent.h"
#include "../Component/InventoryComponent.h"
#include "ItemDataBase.h"
#include "../Character/LvPlayer.h"

UTileView* UCampFireBase::mCampFireTileView = nullptr;

void UCampFireBase::NativeConstruct()
{
	Super::NativeConstruct();
	OnceCheck = false;
	mCampFireTileView = Cast<UTileView>(GetWidgetFromName(FName(TEXT("CampFireTileView"))));
	mCampFireTileView->SetVisibility(ESlateVisibility::Visible);

	mResultImg = Cast<UImage>(GetWidgetFromName(FName(TEXT("Result"))));
	mResultBtn = Cast<UButton>(GetWidgetFromName(FName(TEXT("ResultBtn"))));
	mResultBtn->OnClicked.AddDynamic(this, &UCampFireBase::OnClickedCraftItem);

	mCanGetCraftedItem = false;
	mItemID = 0;
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
			// ����
			UCraftComponent* Component = Character->GetCraftComponent();
			Component->OnItemsChangedEvent.AddUObject(this, &UCampFireBase::OnItemsChanged);
			Component->OnCraftFinishedEvent.AddUObject(this, &UCampFireBase::OnCraftFinished);

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
}

void UCampFireBase::OnCraftFinished(int32 ItemID)
{
	mItemID = ItemID;
	if (ItemID == -1)
	{
		GetResultImage()->SetBrushFromTexture(nullptr);
		mCanGetCraftedItem = false;
	}
	else
	{
		mCanGetCraftedItem = true;

		FItemTable* ItemTable = UInventory::GetInst(GetWorld())->GetInfoItem(ItemID);
		UTexture2D* pTex2D = LoadObject<UTexture2D>(nullptr, *(ItemTable->TexturePath));

		GetResultImage()->SetBrushFromTexture(pTex2D);
	}
}

void UCampFireBase::OnClickedCraftItem()
{
	if (true == mCanGetCraftedItem)
	{
		mCanGetCraftedItem = false;
		//FItemTable* Table = UInventory::GetInst(GetGameInstance())->GetInfoItem(mItemID);
		//UItemDataBase* pNewData = NewObject<UItemDataBase>();
		//pNewData->SetItemIconPath(Table->TexturePath);
		//pNewData->SetItemID(ItemID);

		APlayerController* Controller = GetOwningPlayer();
		ALvPlayer* Character = Cast<ALvPlayer>(Controller->GetCharacter());
		Character->GetInventoryComponent()->ServerAddItem(mItemID);
		Character->GetCraftComponent()->ServerClear();
	}
}
