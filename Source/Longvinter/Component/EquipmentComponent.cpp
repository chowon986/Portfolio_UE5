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

	SetIsReplicated(true);

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
	// ...
}

void UEquipmentComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION(UEquipmentComponent, mAmmoCount, COND_AutonomousOnly);
	DOREPLIFETIME_CONDITION(UEquipmentComponent, mItems, COND_AutonomousOnly);
}

void UEquipmentComponent::OnRep_AmmoCount()
{
	OnAmmoCountChangedEvent.Broadcast(mAmmoCount);
}

void UEquipmentComponent::OnRep_Items()
{
	OnItemsChangedEvent.Broadcast(mItems);
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
			
			// �̹� ���ڸ� ���� �ִٸ�
			if (ItemInfo->EquipmentType == EEquipmentType::Equipment_Hat)
			{
				if (IsValid(PlayerCharacter))
				{
					// ������ ���� �ִ� �������� �κ��丮�� ������
					PlayerCharacter->GetInventoryComponent()->ServerAddItem(Item);

					// ���â������ �����Ѵ�.
					ServerRemoveItem(Item);
				}
			}
		}

		// ���ο� ���� ����
		PlayerCharacter->SetHat(ItemID);
	}

	mItems.Add(ItemID);
}

