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

	void ServerAddItem(int32 ItemID);
	const TArray<int32>& GetCraftItems() { return mCraftItems; }

	UFUNCTION()
		void OnRep_CraftItems();


private:
	UPROPERTY(ReplicatedUsing = OnRep_CraftItems)
	TArray<int32> mCraftItems;

public:
	ItemsChangedEvent OnItemsChangedEvent;
};
