// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "MVVMViewModelBase.h"
#include "LvPlayerStateViewModel.generated.h"

/**
 * 
 */
UCLASS()
class LONGVINTER_API ULvPlayerStateViewModel : public UMVVMViewModelBase
{
	GENERATED_BODY()

public:
	ULvPlayerStateViewModel();

	UFUNCTION(BlueprintCallable)
		void SetCurrentHealth(float NewCurrentHealth);
	UFUNCTION(BlueprintCallable)
		float GetCurrentHealth() const { return mCurrentHealth; }
	UFUNCTION(BlueprintPure, FieldNotify)
		float GetHealthPercent() const { return mCurrentHealth / mMaxHealth; }

private:
	void OnPlayerHPChanged(float HP);
	
public:
	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter="SetCurrentHealth", Getter="GetCurrentHealth")
	float mCurrentHealth;
	UPROPERTY()
		float mMaxHealth = 10;
};
