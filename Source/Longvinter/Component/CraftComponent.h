// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "Components/ActorComponent.h"
#include "CraftComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class LONGVINTER_API UCraftComponent : public UActorComponent
{
	GENERATED_BODY()
	DECLARE_EVENT_OneParam(UCraftComponent, ItemsChangedEvent, TArray<int32>)
	DECLARE_EVENT_OneParam(UCraftComponent, CraftFinishedEvent, int32)


public:	
	// Sets default values for this component's properties
	UCraftComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UFUNCTION(Server, Reliable)	
	void ServerAddItem(int32 ItemID);

	const TArray<int32>& GetCraftItems() { return mCraftItems; }

	UFUNCTION()
	void OnRep_CraftItems();

	UFUNCTION()
	void OnRep_CraftID();

	UFUNCTION(Server, Reliable)
	void ServerClear();


private:
	UPROPERTY(ReplicatedUsing = OnRep_CraftItems)
	TArray<int32> mCraftItems;

	UPROPERTY(ReplicatedUsing = OnRep_CraftID)
	int32 mCraftedItemID; // 서버가 변경해야 클라에 적용

public:
	ItemsChangedEvent OnItemsChangedEvent;
	CraftFinishedEvent OnCraftFinishedEvent;
};
