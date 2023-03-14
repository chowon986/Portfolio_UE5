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
}

ULvGameInstance::~ULvGameInstance()
{
}

void ULvGameInstance::Init()
{
	Super::Init();
}
