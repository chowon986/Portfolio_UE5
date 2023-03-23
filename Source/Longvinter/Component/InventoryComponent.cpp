// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryComponent.h"
#include "Net/UnrealNetwork.h"
#include "../Character/CharacterBase.h"
#include "../Character/LvPlayerController.h"
#include "../Character/LvPlayer.h"
#include "CraftComponent.h"
#include <Longvinter/Inventory/Inventory.h>
#include <Longvinter/LongvinterGameModeBase.h>
#include "../UMG/ItemDataBase.h"
#include "../UMG/MainHUDBase.h"
#include "../UMG/InventoryBase.h"

// Sets default values for this component's properties
UInventoryComponent::UInventoryComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	SetIsReplicated(true);
	// ...
}

// Called when the game starts
void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UInventoryComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UInventoryComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UInventoryComponent, mItems);
	DOREPLIFETIME(UInventoryComponent, mMK);
}

void UInventoryComponent::ServerAddItem_Implementation(int32 ItemID)
{
	mItems.Add(ItemID);
}

void UInventoryComponent::ServerRemoveItem_Implementation(int32 ItemID)
{
	mItems.RemoveSingle(ItemID);
}


void UInventoryComponent::OnRep_Items()
{
	OnItemsChangedEvent.Broadcast(mItems);
}

void UInventoryComponent::OnRep_MK()
{
	OnMKChangedEvent.Broadcast(mMK);
}

void UInventoryComponent::ServerBuyItem_Implementation(int32 ItemID)
{
	FItemTable* Table = UInventory::GetInst(GetWorld())->GetInfoItem(ItemID);
	int32 Price = FCString::Atoi(*(Table->Description));

	if (GetMK() >= Price)
	{
		ServerSetMK(GetMK() - FCString::Atoi(*(Table->Description)));
		ServerAddItem(ItemID);
	}
}

void UInventoryComponent::ServerSellItem_Implementation(int32 ItemID)
{
	for (int32 Item : mItems)
	{
		if (Item == ItemID)
		{
			FItemTable* Table = UInventory::GetInst(GetWorld())->GetInfoItem(ItemID);
			ServerSetMK(GetMK() + FCString::Atoi(*(Table->Description)));
			ServerRemoveItem(ItemID);
			return;
		}
	}
}

void UInventoryComponent::ServerUseItem_Implementation(int32 ItemID)
{
	UDataTable* ItemTable = UInventory::GetInst(GetWorld())->GetItemTable();
	// ������ ���̺��� ItemID�� ������ ���� ��������
	FItemTable* ItemInfo = ItemTable->FindRow<FItemTable>(FName(FString::FromInt(ItemID)), nullptr);

	//

	

	//{
	//	UItemDataBase* pNewData = NewObject<UItemDataBase>();
	//	FItemTable* Table = UInventory::GetInst(GetWorld())->GetInfoItem(ItemID);

	//	pNewData->SetItemIconPath(Table->TexturePath);
	//	pNewData->SetItemID(ItemID);
	//	Ca//mpFireWidget->mCampFireTileView->AddItem(pNewData);
	//	
	//	//ALvPlayer* PlayerCharacter = Cast<ALvPlayer>();

	//	if (IsValid(PlayerCharacter))
	//	{
	//		PlayerCharacter->GetCraftComponent()->ServerAddItem(ItemID);
	//	}
	//}
	
	//else
	//{
	//	if (ItemInfo->ItemType == EItemType::Normal)
	//		return;
	//	else if (ItemInfo->ItemType == EItemType::Food)
	//	{
	//		// �������� ���� ����Ʈ�� ������ ���� ���� ���� �˾Ƴ���
	//		int32 BuffCount = ItemInfo->BuffList.Num();

	//		// ���� ������ŭ �ݺ� ������
	//		if (0 != BuffCount)
	//		{
	//			for (int i = 0; i < BuffCount; i++)
	//			{
	//				int32 BuffID = ItemInfo->BuffList[i]; // �������̺��� ã�� ID�� �˾Ƴ���
	//				UDataTable* BuffTable = UInventory::GetInst(GetWorld())->GetBuffTable(); // ���� ���̺� ��������
	//				FBuffTable* BuffInfo = BuffTable->FindRow<FBuffTable>(FName(FString::FromInt(BuffID)), nullptr); // ���� ���̺� BuffID�� �־ ���� ��������

	//				if (BuffInfo->BuffType == EBuffType::HP)
	//				{
	//					ACharacterBase* LvCharacter = Cast<ACharacterBase>(GetOwner());
	//					LvCharacter->SetCurrentHealth(LvCharacter->GetCurrentHealth() + BuffInfo->Amount);
	//				}
	//				else if (ItemInfo->ItemType == EItemType::Equipment)
	//				{

	//				}
	//				else if (ItemInfo->ItemType == EItemType::Decorative)
	//				{

	//				}
	//			}
	//		}
	//	}
	//}

	mItems.RemoveSingle(ItemID);
}
