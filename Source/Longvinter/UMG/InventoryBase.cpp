// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryBase.h"
#include "ItemDataBase.h"
#include "../Character/LvPlayer.h"
#include "../Inventory/Inventory.h"
#include "../Character/LvPlayerController.h"
#include "../Component/InventoryComponent.h"
#include "../Component/CraftComponent.h"

void UInventoryBase::NativeConstruct()
{
	Super::NativeConstruct();
	OnceCheck = false;
	mTileView = Cast<UTileView>(GetWidgetFromName(FName(TEXT("TileView"))));
	mMKTxt = Cast<UTextBlock>(GetWidgetFromName(FName(TEXT("TTLMK"))));
	mTileView->OnItemIsHoveredChanged().AddUObject(this, &UInventoryBase::OnIsHoveredChanged);

	mEquipmentBtn = Cast<UButton>(GetWidgetFromName(FName(TEXT("EquipmentBtn"))));
	mEquipmentBtn->OnClicked.AddDynamic(this, &UInventoryBase::ClickEquipment);
}

void UInventoryBase::NativeTick(const FGeometry& _geo, float _DeltaTime)
{
	Super::NativeTick(_geo, _DeltaTime);

	if (OnceCheck == false)
	{
		APlayerController* Controller = GetOwningLocalPlayer()->GetPlayerController(GetWorld());
		ALvPlayer* Character = Cast<ALvPlayer>(Controller->GetCharacter());
		UInventoryComponent* Component = Character->GetInventoryComponent();
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
		if (Item == -1)
			return;

		FItemTable* Table = UInventory::GetInst(GetGameInstance())->GetInfoItem(Item);
		UItemDataBase* pNewData = NewObject<UItemDataBase>();
		pNewData->SetItemIconPath(Table->TexturePath);
		pNewData->SetItemID(Item);
		pNewData->SetItemType(Table->ItemType);
		pNewData->SetItemName(Table->ItemName.ToString());
		pNewData->SetItemDesc(Table->TextDescription);

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
				if (true == Character->GetCanThrow())
				{
					Character->ServerThrowAwayItem(ItemID);
					Character->GetInventoryComponent()->ServerRemoveItem(ItemID);
					return;
				}

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

void UInventoryBase::ClickEquipment()
{
	APlayerController* Controller = GetOwningLocalPlayer()->GetPlayerController(GetWorld());
	if (IsValid(Controller))
	{
		ALvPlayerController* LvPlayerController = Cast<ALvPlayerController>(Controller);
		if (IsValid(LvPlayerController))
		{
			UEquipmentBase* EquipmentWidget = LvPlayerController->GetMainHUD()->GetEquipmentWidget();
			UInventoryBase* InventoryWidget = LvPlayerController->GetMainHUD()->GetInventoryWidget();

			if (IsValid(EquipmentWidget))
			{
				InventoryWidget->SetVisibility(ESlateVisibility::Collapsed);
				EquipmentWidget->SetVisibility(ESlateVisibility::Visible);
			}
		}
	}
}
