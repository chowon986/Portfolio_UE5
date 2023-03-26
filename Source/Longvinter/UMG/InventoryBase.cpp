// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryBase.h"
#include "ItemDataBase.h"
#include "../Character/LvPlayer.h"
#include "../Inventory/Inventory.h"
#include "../Character/LvPlayerController.h"
#include "../Component/InventoryComponent.h"
#include "../Component/CraftComponent.h"

UTileView* UInventoryBase::mTileView = nullptr;


void UInventoryBase::NativeConstruct()
{
	Super::NativeConstruct();
	OnceCheck = false;
	mTileView = Cast<UTileView>(GetWidgetFromName(FName(TEXT("TileView"))));
	mMKTxt = Cast<UTextBlock>(GetWidgetFromName(FName(TEXT("TTLMK"))));
	mTileView->OnItemIsHoveredChanged().AddUObject(this, &UInventoryBase::OnIsHoveredChanged);
}

void UInventoryBase::NativeTick(const FGeometry& _geo, float _DeltaTime)
{
	Super::NativeTick(_geo, _DeltaTime);

	APlayerController* Controller = GetOwningLocalPlayer()->GetPlayerController(GetWorld());
	ALvPlayer* Character = Cast<ALvPlayer>(Controller->GetCharacter());
	UInventoryComponent* Component = Character->GetInventoryComponent();
	if (OnceCheck == false)
	{
		Component->OnItemsChangedEvent.AddUObject(this, &UInventoryBase::OnItemsChanged);
		Component->OnMKChangedEvent.AddUObject(this, &UInventoryBase::OnMKChanged);
		OnItemsChanged(Component->GetItems());
		OnMKChanged(Component->GetMK());
		OnceCheck = true;
		mTileView->OnItemDoubleClicked().AddUObject(this, &UInventoryBase::ItemClick);
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
		pNewData->SetItemType(Table->ItemType);

		mTileView->AddItem(pNewData);
	}
}

void UInventoryBase::OnMKChanged(int32 MK)
{
	APlayerController* Controller = GetOwningLocalPlayer()->GetPlayerController(GetWorld());
	ALvPlayer* Character = Cast<ALvPlayer>(Controller->GetCharacter());
	UInventoryComponent* Component = Character->GetInventoryComponent();

	mMKTxt->SetText(FText::FromString(FString::FromInt(Component->GetMK())));
}

void UInventoryBase::ItemClick(UObject* Object)
{
	APlayerController* Controller = GetOwningLocalPlayer()->GetPlayerController(GetWorld());
	
	if (IsValid(Controller))
	{
		//ALvPlayer* Character = Cast<ALvPlayer>(Controller->GetLocalPlayer());
		ALvPlayer* Character = Cast<ALvPlayer>(Controller->GetCharacter());
		if (IsValid(Character))
		{
			UItemDataBase* pData = Cast<UItemDataBase>(Object);

			if (IsValid(pData))
			{
				int ItemID = pData->GetItemID();
				ALvPlayerController* LvPlayerController = Cast<ALvPlayerController>(Controller);
				UCampFireBase* CampFireWidget = LvPlayerController->GetMainHUD()->GetCampFireWidget();
				if (true == CampFireWidget->IsVisible())
				{
					Character->GetInventoryComponent()->ServerRemoveItem(ItemID);
					Character->GetCraftComponent()->ServerAddItem(ItemID);
				}

				else
				Character->GetInventoryComponent()->ServerUseItem(ItemID);
			}
		}
	}
}

void UInventoryBase::OnIsHoveredChanged(UObject* Item, bool bIsHovered)
{
	UItemDataBase* ItemInfo = Cast<UItemDataBase>(Item);
	if (IsValid(ItemInfo))
	{
		UInventoryItemBase* ItemBase = mTileView->GetEntryWidgetFromItem<UInventoryItemBase>(ItemInfo);
		if (nullptr != ItemBase)
		{
			if (bIsHovered)
				ItemBase->PlayWidgetAnimation("IconBtnHovered_INST");
			else
				ItemBase->PlayWidgetAnimation("IconBtnUnHovered_INST");
		}
	}
}
