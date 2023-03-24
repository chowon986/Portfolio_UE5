// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include <Components\ProgressBar.h>
#include <Components\Image.h>
#include <Components/TileView.h>
#include "Blueprint/UserWidget.h"
#include <Components\Button.h>
#include "CampFireBase.generated.h"

/**
 * 
 */
UCLASS()
class LONGVINTER_API UCampFireBase : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;
	virtual void NativeTick(const FGeometry& _geo, float _DeltaTime) override;
	void OnItemsChanged(TArray<int32> Items);
	void OnCraftFinished(int32 ItemID);
	void OnProgressBarChanged(float Ratio);

	UFUNCTION()
	void OnClickedCraftItem();

	UFUNCTION()
	void OnCancelCraftItem(UObject* Object);

public:
	static UTileView* mCampFireTileView;

	UImage* GetResultImage() { return mResultImg; }

private:
	bool OnceCheck;
	UImage* mResultImg;
	UImage* mEatImg;
	UButton* mResultBtn;
	bool mCanGetCraftedItem;
	int32 mItemID;
	UProgressBar* mProgressBar;
};
