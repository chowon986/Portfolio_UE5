// Fill out your copyright notice in the Description page of Project Settings.


#include "FarmingBoxComponent.h"
#include "Net/UnrealNetwork.h"

// Sets default values for this component's properties
UFarmingBoxComponent::UFarmingBoxComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	SetIsReplicated(true);

	int ItemCount = FMath::RandRange(1, 5);

	for (int i = 0; i < ItemCount; i++)
	{
		mItems.Add(FMath::RandRange(1, 17));
	}
}


// Called when the game starts
void UFarmingBoxComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UFarmingBoxComponent::OnRep_Items()
{
	OnItemsChangedEvent.Broadcast(mItems);
}

void UFarmingBoxComponent::ServerRemoveItem_Implementation(int32 ItemID)
{
	mItems.RemoveSingle(ItemID);
}

// Called every frame
void UFarmingBoxComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UFarmingBoxComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UFarmingBoxComponent, mItems);
}

