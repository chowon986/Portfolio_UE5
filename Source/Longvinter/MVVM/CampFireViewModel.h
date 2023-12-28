// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "MVVMViewModelBase.h"
#include "CampFireViewModel.generated.h"

class UCampFireItemViewModel;
/**
 * 
 */
UCLASS()
class LONGVINTER_API UCampFireViewModel : public UMVVMViewModelBase
{
	GENERATED_BODY()

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnItemsChangedDelegate);

	
public:
	UCampFireViewModel();

public:
	UFUNCTION(BlueprintCallable)
		void SetCurrentProgressRatio(float NewCurrentRatio);
	UFUNCTION(BlueprintPure, FieldNotify)
		float GetCurrentProgressRatio() const { return mCurrentRatio; }

	UFUNCTION(BlueprintCallable)
		void SetCurrentItems(const TArray<UCampFireItemViewModel*>& NewCurrentItems);
	UFUNCTION(BlueprintPure, FieldNotify)
		TArray<UCampFireItemViewModel*> GetCurrentItems() const { return mItems; }

private:
	void OnProgressBarChanged(float Ratio);
	void OnItemsChanged(TArray<int32> Items);

public:
	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter = "SetCurrentProgressRatio", Getter = "GetCurrentProgressRatio")
		float mCurrentRatio;
	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter = "SetCurrentItems", Getter = "GetCurrentItems")
		TArray<UCampFireItemViewModel*> mItems;

	UPROPERTY(BlueprintAssignable, Category = "Delegate")
		FOnItemsChangedDelegate OnItemsChangedDelegate;

	//TArray<UCampFireItemViewModel*> CampFireItemsArray;
};
