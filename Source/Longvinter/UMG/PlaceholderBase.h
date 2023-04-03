// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include <Components/TileView.h>
//#include "../Component/Placeholder.h"
#include "../Character/PlaceholderActor.h"
#include "Blueprint/UserWidget.h"
#include "PlaceholderBase.generated.h"

/**
 * 
 */
UCLASS()
class LONGVINTER_API UPlaceholderBase : public UUserWidget
{
	GENERATED_BODY()
	
public:
	virtual void NativeConstruct() override;
	virtual void NativeTick(const FGeometry& _geo, float _DeltaTime) override;

	UFUNCTION()
	void ItemClick(UObject* Object);

	void OnPlaceholderItemsChanged(TArray<int32> Items);
	void OnInventoryItemsChanged(TArray<int32> Items);

	//void SetPlaceholder(UPlaceholder* Placeholder) { mPlaceholderComponent = Placeholder; }
	void SetPlaceholder(APlaceholderActor* Placeholder) { mPlaceholder = Placeholder; }

public:
	UTileView* mPlaceholderTileView;
	UTileView* mInventoryTileView;
	bool mOnceCheck;

	//UPlaceholder* mPlaceholderComponent;
	APlaceholderActor* mPlaceholder;
};
