// Fill out your copyright notice in the Description page of Project Settings.


#include "EncyclopediaComponent.h"
#include "Net/UnrealNetwork.h"

// Sets default values for this component's properties
UEncyclopediaComponent::UEncyclopediaComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UEncyclopediaComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UEncyclopediaComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UEncyclopediaComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION(UEncyclopediaComponent, mItems, COND_AutonomousOnly);
}

void UEncyclopediaComponent::OnRep_Items()
{
	OnItemsChangedEvent.Broadcast(mItems);
}

void UEncyclopediaComponent::ServerRemoveItem_Implementation(int32 ItemID)
{
	mItems.RemoveSingle(ItemID);
}

void UEncyclopediaComponent::ServerAddItem_Implementation(int32 ItemID)
{
	mItems.Add(ItemID);
}

void UEncyclopediaComponent::ServerUpdateItem_Implementation(int32 ItemID)
{
	bool AlreadyHave = false;

	// 가지고있는 아이템을 돌면서
	for (int32 Item : mItems)
	{
		if (Item == ItemID)
			AlreadyHave = true;
	}

	if (AlreadyHave == false)
	{
		ServerAddItem(ItemID);
		ServerAddItem(1000);
	}
	else
	{
		// 이미 있는거면
		ServerAddItem(ItemID);
	}
}