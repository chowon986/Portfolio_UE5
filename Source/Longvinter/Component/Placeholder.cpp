// Fill out your copyright notice in the Description page of Project Settings.


#include "Placeholder.h"
#include "../Character/PlaceholderActor.h"
#include "Net/UnrealNetwork.h"
#include "../Character/LvPlayer.h"

// Sets default values for this component's properties
UPlaceholder::UPlaceholder()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	// ...
}


// Called when the game starts
void UPlaceholder::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

// Called every frame
void UPlaceholder::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UPlaceholder::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UPlaceholder, mItems);
}

void UPlaceholder::ServerAddAllItems_Implementation(const TArray<int32>& Items)
{
	for (auto Item : Items)
	{
		mItems.Add(Item);
	}
}

void UPlaceholder::ClientAddAllItems_Implementation(const TArray<int32>& Items)
{
	for (auto Item : Items)
	{
		mItems.Add(Item);
	}
}

void UPlaceholder::OnRep_Items()
{
	OnItemsChangedEvent.Broadcast(mItems);
}

void UPlaceholder::ServerAddItem_Implementation(int32 ItemID)
{
	mItems.Add(ItemID);
}

void UPlaceholder::ServerRemoveItem_Implementation(int32 ItemID)
{
	mItems.RemoveSingle(ItemID);

	if (GetItems().Num() == 0)
		ServerSetDestroyTimer();
}

void UPlaceholder::ServerSetDestroyTimer_Implementation()
{
	if (DestroyTimerHandle.IsValid() == false)
	{
		int32 Time = 2;
		GetWorld()->GetTimerManager().SetTimer(DestroyTimerHandle, FTimerDelegate::CreateUObject(this, &UPlaceholder::ServerOnDestroyTimerExpired), Time, false);
	}
}

void UPlaceholder::ServerOnDestroyTimerExpired_Implementation()
{
	GetOwner()->Destroy();
	GetWorld()->GetTimerManager().ClearTimer(DestroyTimerHandle);
	DestroyTimerHandle.Invalidate();
}