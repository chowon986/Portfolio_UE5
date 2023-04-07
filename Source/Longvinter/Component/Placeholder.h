// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "Components/ActorComponent.h"
#include "Placeholder.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class LONGVINTER_API UPlaceholder : public UActorComponent
{
	GENERATED_BODY()
	DECLARE_EVENT_OneParam(UPlaceholder, ItemsChangedEvent, TArray<int32>)

public:	
	// Sets default values for this component's properties
	UPlaceholder();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UFUNCTION(Server, Reliable)
	void ServerAddAllItems(const TArray<int32>& Items);
	UFUNCTION(Server, Reliable)
	void ClientAddAllItems(const TArray<int32>& Items);

	UFUNCTION()
	void OnRep_Items();

	const TArray<int32>& GetItems() { return mItems; }

	UFUNCTION(Server, Reliable)
	void ServerAddItem(int32 ItemID);

	UFUNCTION(Server, Reliable)
	void ServerRemoveItem(int32 ItemID);

public:
	UPROPERTY(ReplicatedUsing = OnRep_Items)
	TArray<int32> mItems;

	ItemsChangedEvent OnItemsChangedEvent;
};
