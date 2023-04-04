// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <Components/TextBlock.h>
#include <Components/Button.h>
#include <Components/Image.h>
#include "Blueprint/UserWidget.h"
#include "CraftTableBase.generated.h"

/**
 * 
 */
UCLASS()
class LONGVINTER_API UCraftTableBase : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;
	virtual void NativeTick(const FGeometry& _geo, float _DeltaTime) override;

	UFUNCTION()
		void OnClickedDepositBtn();

	UFUNCTION()
		void OnClickedUpgradeBtn();


public:
	UTextBlock* mItemName;
	UTextBlock* mCurCount;
	UTextBlock* mTotalCount;
	UButton* mDepositBtn;
	UTextBlock* mInputTxt;
	UTextBlock* mReadyTxt;
	UTextBlock* mUpgradeTxt;
	UButton* mReadyBtn;
	UButton* mUpgradeBtn;

	UPROPERTY()
	int32 mCurWoodCount;
};
