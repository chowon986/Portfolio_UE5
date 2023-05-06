// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "MVVMViewModelBase.h"
#include "CampFireItemViewModel.generated.h"

/**
 * 
 */
UCLASS()
class LONGVINTER_API UCampFireItemViewModel : public UMVVMViewModelBase
{
	GENERATED_BODY()

public:
	UCampFireItemViewModel();

public:
	UFUNCTION(BlueprintCallable)
		void SetCurrentProgressRatio(float NewCurrentRatio);
	UFUNCTION(BlueprintPure, FieldNotify)
		float GetCurrentProgressRatio() const { return mCurrentRatio; }

private:
	void OnProgressBarChanged(float Ratio);

public:
	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter = "SetCurrentProgressRatio", Getter = "GetCurrentProgressRatio")
		float mCurrentRatio;
};
