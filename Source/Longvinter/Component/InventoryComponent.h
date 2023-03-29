// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "Components/ActorComponent.h"
#include "InventoryComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class LONGVINTER_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()
	DECLARE_EVENT_OneParam(UInventoryComponent, ItemsChangedEvent, TArray<int32>)
	DECLARE_EVENT_OneParam(UInventoryComponent, MKChangedEvent, int32)
public:	
	// Sets default values for this component's properties
	UInventoryComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	const TArray<int32>& GetItems() { return mItems; }

	UFUNCTION()
	void OnRep_Items();

	UFUNCTION()
	void OnRep_MK();

	UFUNCTION(Server, Reliable)
	void ServerAddItem(int32 ItemID);

	UFUNCTION(Server, Reliable)
	void ServerRemoveItem(int32 ItemID);

	UFUNCTION(Server, Reliable)
	void ServerUseItem(int32 ItemID);

	UFUNCTION(Server, Reliable)
	void ServerSellItem(int32 ItemID);

	UFUNCTION(Server, Reliable)
	void ServerBuyItem(int32 ItemID);

	UFUNCTION(Server, Reliable)
	void ServerRemoveAllItems(const TArray<int32>& ItemIDs);

	int32 GetMK() { return mMK; }
	void ServerSetMK(int32 MK) { mMK = MK; }

private:
	UPROPERTY(ReplicatedUsing = OnRep_Items)
	TArray<int32> mItems;

	UPROPERTY(ReplicatedUsing = OnRep_MK)
		int32 mMK;

public:
	ItemsChangedEvent OnItemsChangedEvent;
	MKChangedEvent OnMKChangedEvent;
};
