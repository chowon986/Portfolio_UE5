// Fill out your copyright notice in the Description page of Project Settings.


#include "EquipmentComponent.h"
#include "../Inventory/Inventory.h"
#include "InventoryComponent.h"
#include "../Character/LvPlayer.h"
#include "Net/UnrealNetwork.h"

// Sets default values for this component's properties
UEquipmentComponent::UEquipmentComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UEquipmentComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UEquipmentComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	ALvPlayer* PlayerCharacter = Cast<ALvPlayer>(GetOwner());

	if (IsValid(PlayerCharacter))
	{
		int32 CurAmmoCount = PlayerCharacter->GetAmmoCount();

		if (CurAmmoCount != mAmmoCount)
		{
			mAmmoCount = CurAmmoCount;
		}
	}
}

void UEquipmentComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UEquipmentComponent, mAmmoCount);
	DOREPLIFETIME(UEquipmentComponent, mItems);
}

void UEquipmentComponent::OnRep_AmmoCount()
{
	OnAmmoCountChangedEvent.Broadcast(mAmmoCount);
}

void UEquipmentComponent::OnRep_Items()
{
	OnItemsChangedEvent.Broadcast(mItems);
	ALvPlayer* PlayerCharacter = Cast<ALvPlayer>(GetOwner());
	PlayerCharacter->OnEquipmentItemChanged();
}

void UEquipmentComponent::ServerRemoveAllItems_Implementation(const TArray<int32>& ItemIDs)
{
	for (int32 Item : ItemIDs)
	{
		ServerRemoveItem(Item);
	}
}

int32 UEquipmentComponent::GetAmmoCount()
{
	ALvPlayer* PlayerCharacter = Cast<ALvPlayer>(GetOwner());
	
	return PlayerCharacter->GetAmmoCount();
}

void UEquipmentComponent::ServerRemoveItem_Implementation(int32 ItemID)
{
	FItemTable* ItemTable = UInventory::GetInst(GetWorld())->GetInfoItem(ItemID);
	ALvPlayer* PlayerCharacter = Cast<ALvPlayer>(GetOwner());

	if (ItemTable->EquipmentType == EEquipmentType::Equipment_Hat)
	{
		PlayerCharacter->mHat = nullptr;
	}

	mItems.RemoveSingle(ItemID);
}

void UEquipmentComponent::ServerAddItem_Implementation(int32 ItemID)
{
	FItemTable* ItemTable = UInventory::GetInst(GetWorld())->GetInfoItem(ItemID);
	ALvPlayer* PlayerCharacter = Cast<ALvPlayer>(GetOwner());
	
	if (ItemTable->EquipmentType == EEquipmentType::Equipment_Hat)
	{
		for (auto Item : mItems)
		{
			FItemTable* ItemInfo = UInventory::GetInst(GetWorld())->GetInfoItem(Item);
			
			// 이미 모자를 끼고 있다면
			if (ItemInfo->EquipmentType == EEquipmentType::Equipment_Hat)
			{
				if (IsValid(PlayerCharacter))
				{
					// 기존에 끼고 있던 아이템은 인벤토리에 보내고
					PlayerCharacter->GetInventoryComponent()->ServerAddItem(Item);

					// 장비창에서는 제거한다.
					ServerRemoveItem(Item);
				}
			}
			
		}
	}
	else if (ItemTable->EquipmentType == EEquipmentType::Equipment_Weapon_Gun)
	{
		for (auto Item : mItems)
		{
			FItemTable* ItemInfo = UInventory::GetInst(GetWorld())->GetInfoItem(Item);

			// 이미 모자를 끼고 있다면
			if (ItemInfo->EquipmentType == EEquipmentType::Equipment_Weapon_Gun)
			{
				if (IsValid(PlayerCharacter))
				{
					// 기존에 끼고 있던 아이템은 인벤토리에 보내고
					PlayerCharacter->GetInventoryComponent()->ServerAddItem(Item);

					// 장비창에서는 제거한다.
					ServerRemoveItem(Item);
				}
			}

		}
	}
	else if (ItemTable->EquipmentType == EEquipmentType::Equipment_Weapon_Rod)
	{
		for (auto Item : mItems)
		{
			FItemTable* ItemInfo = UInventory::GetInst(GetWorld())->GetInfoItem(Item);

			// 이미 모자를 끼고 있다면
			if (ItemInfo->EquipmentType == EEquipmentType::Equipment_Weapon_Rod)
			{
				if (IsValid(PlayerCharacter))
				{
					// 기존에 끼고 있던 아이템은 인벤토리에 보내고
					PlayerCharacter->GetInventoryComponent()->ServerAddItem(Item);

					// 장비창에서는 제거한다.
					ServerRemoveItem(Item);
				}
			}

		}
	}
	else if (ItemTable->EquipmentType == EEquipmentType::Equipment_Weapon_Saw)
	{
		for (auto Item : mItems)
		{
			FItemTable* ItemInfo = UInventory::GetInst(GetWorld())->GetInfoItem(Item);

			// 이미 모자를 끼고 있다면
			if (ItemInfo->EquipmentType == EEquipmentType::Equipment_Weapon_Saw)
			{
				if (IsValid(PlayerCharacter))
				{
					// 기존에 끼고 있던 아이템은 인벤토리에 보내고
					PlayerCharacter->GetInventoryComponent()->ServerAddItem(Item);

					// 장비창에서는 제거한다.
					ServerRemoveItem(Item);
				}
			}

		}
	}

	mItems.Add(ItemID);
}

