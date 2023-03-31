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

	void OnItemsChanged(TArray<int32> Items);

public:
	static UListView* mListView;
	bool mOnceCheck;
};