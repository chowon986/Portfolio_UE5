// Fill out your copyright notice in the Description page of Project Settings.


#include "CraftComponent.h"
#include "../Inventory/Inventory.h"
#include "Net/UnrealNetwork.h"

// Sets default values for this component's properties
UCraftComponent::UCraftComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UCraftComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UCraftComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UCraftComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UCraftComponent, mCraftItems);
}

void UCraftComponent::ServerAddItem(int32 ItemID)
{
	mCraftItems.Add(ItemID);

	mCraftItems.Sort();

	UDataTable* Table = UInventory::GetInst(GetWorld())->GetCraftTable();
	FString Str;
	TArray<FCraftTable*> Rows; 
	
	Table->GetAllRows<FCraftTable>(Str, Rows);


	for (FCraftTable* CraftTable : Rows)
	{
		if (mCraftItems.Num() != CraftTable->RequiredItemList.Num())
			continue;

		bool AllMatch = true;

		for (int i = 0; i < CraftTable->RequiredItemList.Num(); i++)
		{
			if (mCraftItems[i] != CraftTable->RequiredItemList[i])
			{
				AllMatch = false;
			}
		}

		//if (true == AllMatch)
		//{
		//	mCraftItems.Empty();
		//}
	}
}


void UCraftComponent::OnRep_CraftItems()
{
	OnItemsChangedEvent.Broadcast(mCraftItems);
}

