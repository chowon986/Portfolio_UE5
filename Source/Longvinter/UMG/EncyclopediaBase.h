// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include <Components/ListView.h>
#include "Blueprint/UserWidget.h"
#include "EncyclopediaBase.generated.h"

/**
 * 
 */
UCLASS()
class LONGVINTER_API UEncyclopediaBase : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;
	virtual void NativeTick(const FGeometry& _geo, float _DeltaTime) override;

	UFUNCTION()
	void OnItemsChanged(TArray<int32> Items);
	
	void OnDestroyTimerExpired();
public:
	UListView* mListView;
	bool mOnceCheck;

	UPROPERTY()
	TArray<int32> mItems;
};