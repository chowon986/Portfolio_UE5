// Fill out your copyright notice in the Description page of Project Settings.


#include "LvGameInstance.h"
#include "Inventory/Inventory.h"

ULvGameInstance::ULvGameInstance()
	: mItemTable(nullptr)
	, mInventory(nullptr)
{
	static ConstructorHelpers::FObjectFinder<UDataTable> ItemTable(TEXT("DataTable'/Game/DataTable/TItemTable.TItemTable'"));
	if (ItemTable.Succeeded())
	{
		mItemTable = ItemTable.Object;
		UInventory::GetInst(this)->SetItemTable(mItemTable);
	}

	static ConstructorHelpers::FObjectFinder<UDataTable> BuffTable(TEXT("DataTable'/Game/DataTable/TBuffTable.TBuffTable'"));
	if (BuffTable.Succeeded())
	{
		mBuffTable = BuffTable.Object;
		UInventory::GetInst(this)->SetBuffTable(mBuffTable);
	}


	static ConstructorHelpers::FObjectFinder<UDataTable> CraftTable(TEXT("DataTable'/Game/DataTable/TCraftTable.TCraftTable'"));
	if (CraftTable.Succeeded())
	{
		mCraftTable = CraftTable.Object;
		UInventory::GetInst(this)->SetCraftTable(mCraftTable);
	}
}

ULvGameInstance::~ULvGameInstance()
{
}

void ULvGameInstance::Init()
{
	Super::Init();
}
