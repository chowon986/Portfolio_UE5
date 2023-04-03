// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "../Character/FarmingBox.h"
#include "Blueprint/UserWidget.h"
#include <Components/TileView.h>
#include "RandomBoxBase.generated.h"

/**
 * 
 */
UCLASS()
class LONGVINTER_API URandomBoxBase : public UUserWidget
{
	GENERATED_BODY()
	
public:
	virtual void NativeConstruct() override;
	virtual void NativeTick(const FGeometry& _geo, float _DeltaTime) override;

	UFUNCTION()
	void ItemClick(UObject* Object);

	UFUNCTION(Server, Reliable)
	void ServerSetRandomBox(AFarmingBox* Box);

	void OnRandomBoxItemsChanged(TArray<int32> Items);
	void OnInventoryItemsChanged(TArray<int32> Items);

	void SetOnceCheck(bool Value) { mOnceCheck = Value; }
public:
	UTileView* mRandomBoxTileView;
	UTileView* mInventoryTileView;
	bool mOnceCheck;
	AFarmingBox* mRandomBox;
};
