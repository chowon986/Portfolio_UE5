// Fill out your copyright notice in the Description page of Project Settings.


#include "EquipmentBase.h"
#include "../Character/LvPlayer.h"
#include "../Character/LvPlayerController.h"
#include "../Component/EquipmentComponent.h"
#include "../Component/InventoryComponent.h"
#include "ItemDataBase.h"
#include "../Inventory/Inventory.h"

void UEquipmentBase::NativeConstruct()
{
	Super::NativeConstruct();
	OnceCheck = false;
	mTileView = Cast<UTileView>(GetWidgetFromName(FName(TEXT("TileView"))));
	mMKTxt = Cast<UTextBlock>(GetWidgetFromName(FName(TEXT("TTLMK"))));
	mAmmoCount = Cast<UTextBlock>(GetWidgetFromName(FName(TEXT("AmmoCount"))));

	mInventoryBtn = Cast<UButton>(GetWidgetFromName(FName(TEXT("InventoryBtn"))));
	mInventoryBtn->OnClicked.AddDynamic(this, &UEquipmentBase::ClickInventory);
}

void UEquipmentBase::NativeTick(const FGeometry& _geo, float _DeltaTime)
{
	Super::NativeTick(_geo, _DeltaTime);

	if (false == OnceCheck)
	{
		APlayerController* Controller = GetOwningLocalPlayer()->GetPlayerController(GetWorld());
		ALvPlayer* Character = Cast<ALvPlayer>(Controller->GetCharacter());
		UEquipmentComponent* Equipment = Character->GetEquipmentComponent();
		UInventoryComponent* Inventory = Character->GetInventoryComponent();
		if (OnceCheck == false)
		{
			Equipment->OnItemsChangedEvent.AddUObject(this, &UEquipmentBase::OnItemsChanged);
			Equipment->OnAmmoCountChangedEvent.AddUObject(this, &UEquipmentBase::OnAmmoChanged);
			Inventory->OnMKChangedEvent.AddUObject(this, &UEquipmentBase::OnMKChanged);
			OnItemsChanged(Equipment->GetItems());
			OnMKChanged(Inventory->GetMK());
			OnAmmoChanged(Equipment->GetAmmoCount());

			mTileView->OnItemDoubleClicked().AddUObject(this, &UEquipmentBase::ItemClick);
			OnceCheck = true;
		}
	}

}

void UEquipmentBase::ClickInventory()
{
	APlayerController* Controller = GetOwningLocalPlayer()->GetPlayerController(GetWorld());
	if (IsValid(Controller))
	{
		ALvPlayerController* PlayerController = Cast<ALvPlayerController>(Controller);
		if (IsValid(PlayerController))
		{
			UInventoryBase* InventoryWidget = PlayerController->GetMainHUD()->GetInventoryWidget();
			if (IsValid(InventoryWidget))
				InventoryWidget->SetVisibility(ESlateVisibility::Visible);

			UEquipmentBase* EquipmentWidget = PlayerController->GetMainHUD()->GetEquipmentWidget();
			if (IsValid(EquipmentWidget))
				EquipmentWidget->SetVisibility(ESlateVisibility::Collapsed);
		}
	}
}

void UEquipmentBase::OnItemsChanged(TArray<int32> Items)
{
	mTileView->ClearListItems();

	for (int32 Item : Items)
	{
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

void UEquipmentBase::OnAmmoChanged(int32 AmmoCount)
{
	mAmmoCount->SetText(FText::FromString(FString::FromInt(AmmoCount)));
}

void UEquipmentBase::OnMKChanged(int32 MK)
{
//	APlayerController* Controller = GetOwningLocalPlayer()->GetPlayerController(GetWorld());
//	ALvPlayer* Character = Cast<ALvPlayer>(Controller->GetCharacter());
//	UInventoryComponent* Component = Character->GetInventoryComponent();

	mMKTxt->SetText(FText::FromString(FString::FromInt(MK)));
}

void UEquipmentBase::ItemClick(UObject* Object)
{
	APlayerController* Controller = GetOwningLocalPlayer()->GetPlayerController(GetWorld());

	if (IsValid(Controller))
	{
		ALvPlayer* Character = Cast<ALvPlayer>(Controller->GetCharacter());
		if (IsValid(Character))
		{
			UItemDataBase* pData = Cast<UItemDataBase>(Object);

			if (IsValid(pData))
			{
				int ItemID = pData->GetItemID();

				Character->GetInventoryComponent()->ServerAddItem(ItemID);
				Character->GetEquipmentComponent()->ServerRemoveItem(ItemID);
			}
		}
	}
}
