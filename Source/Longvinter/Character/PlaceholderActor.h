// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "NonPlayerActorBase.h"
#include "../Component/Placeholder.h"
#include "PlaceholderActor.generated.h"

/**
 * 
 */
UCLASS()
class LONGVINTER_API APlaceholderActor : public ANonPlayerActorBase
{
	GENERATED_BODY()

public:
	APlaceholderActor();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(Server, Reliable)
	void ServerAddAllItems(const TArray<int32>& Items);
	UFUNCTION(Server, Reliable)
	void ServerAddItem(int32 ItemID);
	UFUNCTION(Server, Reliable)
	void ServerRemoveItem(int32 ItemID);

	void SetPlaceholderComponent(UPlaceholder* Component) { mPlaceholderComponent = Component; }
	UPlaceholder* GetPlaceholderComponent() { return mPlaceholderComponent; }

public:
	UPROPERTY()
	UPlaceholder* mPlaceholderComponent;
};
