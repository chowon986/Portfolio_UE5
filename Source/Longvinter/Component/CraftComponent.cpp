// Fill out your copyright notice in the Description page of Project Settings.


#include "CraftComponent.h"
#include "../Inventory/Inventory.h"
#include "../Character/LvPlayer.h"
#include "../Character/LvPlayerController.h"
#include "Net/UnrealNetwork.h"
#include "../UMG/ItemDataBase.h"

// Sets default values for this component's properties
UCraftComponent::UCraftComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	// ...

	SetIsReplicated(true);

	mCookingTime = 0.f;
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

	if (AllMatchTimerHandle.IsValid())
	{
		float ElapsedTime = GetOwner()->GetWorld()->GetTimerManager().GetTimerElapsed(AllMatchTimerHandle);

		mProgressRatio = (ElapsedTime / mCookingTime);
	}
	// ...
}

void UCraftComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UCraftComponent, mCraftItems);
	DOREPLIFETIME(UCraftComponent, mCraftedItemID);
	DOREPLIFETIME(UCraftComponent, mProgressRatio);
}

void UCraftComponent::ServerAddItem_Implementation(int32 ItemID)
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

		if (true == AllMatch)
		{
			ServerSetAllMatchTimer(mCraftItems.Num(), FCString::Atoi(*(CraftTable->Name.ToString())));
		}
	}
}

void UCraftComponent::ServerSetAllMatchTimer(int32 IngredientCount, int32 ItemID)
{
	mCookingTime = IngredientCount * 1.f;

	GetOwner()->GetWorldTimerManager().SetTimer(AllMatchTimerHandle, FTimerDelegate::CreateUObject(this, &UCraftComponent::ServerOnAllMatchTimerExpired, ItemID), mCookingTime, false);
}

void UCraftComponent::ServerOnAllMatchTimerExpired(int32 ItemID)
{
	mCraftedItemID = ItemID;
	mProgressRatio = 1.f;
	GetOwner()->GetWorldTimerManager().ClearTimer(AllMatchTimerHandle);
	AllMatchTimerHandle.Invalidate();
}


void UCraftComponent::OnRep_CraftItems()
{
	OnItemsChangedEvent.Broadcast(mCraftItems);
}

void UCraftComponent::OnRep_CraftID()
{
	OnCraftFinishedEvent.Broadcast(mCraftedItemID);
}

void UCraftComponent::OnRep_ProgressRatio()
{
	OnProgressBarChangedEvent.Broadcast(mProgressRatio);
}

void UCraftComponent::ServerClear_Implementation()
{
	mCraftItems.Empty();
	mCraftedItemID = -1;
	mProgressRatio = 0.f;
}
