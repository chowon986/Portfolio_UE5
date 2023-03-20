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

	void ServerAddItem(int32 ItemID);
	const TArray<int32>& GetItems() { return mItems; }

	UFUNCTION()
	void OnRep_Items();

	UFUNCTION(Server, Reliable)
	void ServerUseItem(int32 ItemID);

private:
	UPROPERTY(ReplicatedUsing = OnRep_Items)
	TArray<int32> mItems;


public:
	ItemsChangedEvent OnItemsChangedEvent;
};
