// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "Components/ActorComponent.h"
#include "EquipmentComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class LONGVINTER_API UEquipmentComponent : public UActorComponent
{
	GENERATED_BODY()
	DECLARE_EVENT_OneParam(UEquipmentComponent, AmmoCountChangedEvent, int32)
	DECLARE_EVENT_OneParam(UEquipmentComponent, ItemsChangedEvent, TArray<int32>)

public:	
	// Sets default values for this component's properties
	UEquipmentComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UFUNCTION()
	void OnRep_AmmoCount();	
	
	UFUNCTION()
	void OnRep_Items();

	UFUNCTION(Server, Reliable)
	void ServerAddItem(int32 ItemID);

	UFUNCTION(Server, Reliable)
	void ServerRemoveItem(int32 ItemID);

	UFUNCTION(Server, Reliable)
	void ServerRemoveAllItems(const TArray<int32>& ItemIDs);

	const TArray<int32>& GetItems() { return mItems; }

	int32 GetAmmoCount();
public:
	UPROPERTY(ReplicatedUsing = OnRep_AmmoCount)
	int32 mAmmoCount;

	UPROPERTY(ReplicatedUsing = OnRep_Items)
	TArray<int32> mItems;

	AmmoCountChangedEvent OnAmmoCountChangedEvent;
	ItemsChangedEvent OnItemsChangedEvent;
};
