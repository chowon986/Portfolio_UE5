// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "Components/ActorComponent.h"
#include "EncyclopediaComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class LONGVINTER_API UEncyclopediaComponent : public UActorComponent
{
	GENERATED_BODY()	
	DECLARE_EVENT_OneParam(UEncyclopediaComponent, ItemsChangedEvent, TArray<int32>)


public:	
	// Sets default values for this component's properties
	UEncyclopediaComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UFUNCTION()
	void OnRep_Items();

	UFUNCTION(Server, Reliable)
	void ServerAddItem(int32 ItemID);

	UFUNCTION(Server, Reliable)
	void ServerRemoveItem(int32 ItemID);

	UFUNCTION(Server, Reliable)
	void ServerUpdateItem(int32 ItemID);

	const TArray<int32>& GetItems() { return mItems; }

private:
	UPROPERTY(ReplicatedUsing = OnRep_Items)
	TArray<int32> mItems;

public:
	ItemsChangedEvent OnItemsChangedEvent;
};
