// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <Components/TextBlock.h>
#include <Components/Button.h>
#include <Components/Image.h>
#include "Blueprint/UserWidget.h"
#include "CraftTableItemBase.generated.h"

/**
 * 
 */
UCLASS()
class LONGVINTER_API UCraftTableItemBase : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;
	virtual void NativeTick(const FGeometry& _geo, float _DeltaTime) override;

	UFUNCTION()
	void OnClickedDepositBtn();

	UFUNCTION(BlueprintCallable)
	void InitFromData(UObject* _Data);
public:
	UTextBlock* mItemName;
	UTextBlock* mCurCount;
	UTextBlock* mTotalCount;
	UImage* mItemImg;
	UButton* mDepositBtn;

	UPROPERTY()
	int32 mCurWoodCount;
};
