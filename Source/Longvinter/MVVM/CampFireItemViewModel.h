// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "MVVMViewModelBase.h"
#include <Styling/SlateBrush.h>

#include "CampFireItemViewModel.generated.h"

class UTexture2D;
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
		void SetItemIconBrush(FSlateBrush NewBrush);
	UFUNCTION(BlueprintPure, FieldNotify)
		FSlateBrush GetItemIconBrush() const { return mItemIconBrush; }

	UFUNCTION(BlueprintCallable)
		void SetItemIconPathRight(FString NewString);
	UFUNCTION(BlueprintPure, FieldNotify)
		FString GetItemIconPathRight() const { return mItemIconPathRight; }

	UFUNCTION(BlueprintCallable)
		void SetItemDescription(FString NewString);
	UFUNCTION(BlueprintPure, FieldNotify)
		FString GetItemDescription() const { return mItemDescription; }

	UFUNCTION(BlueprintCallable)
		void SetItemDescriptionLeft(FString NewString);
	UFUNCTION(BlueprintPure, FieldNotify)
		FString GetItemDescriptionLeft() const { return mItemDescriptionLeft; }

	UFUNCTION(BlueprintCallable)
		void SetItemName(FString NewString);
	UFUNCTION(BlueprintPure, FieldNotify)
		FString GetItemName() const { return mItemName; }

	UFUNCTION(BlueprintCallable)
		void SetItemTextDescription(FString NewString);
	UFUNCTION(BlueprintPure, FieldNotify)
		FString GetItemTextDescription() const { return mItemTextDescription; }

	UFUNCTION(BlueprintCallable)
		void SetEatIconVisibility(bool Visible);
	UFUNCTION(BlueprintPure, FieldNotify)
		bool GetEatIconVisibility() const { return EatIconCanVisible; }

public:
	void SetItemTable(FItemTable* Table);
	EItemType GetItemType() { return mItemType; }

	UFUNCTION(BlueprintCallable)
	void InitFromData(UObject* _Data);

public:
	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter = "SetItemIconBrush", Getter = "GetItemIconBrush")
	FSlateBrush mItemIconBrush;
	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter = "SetItemIconPathRight", Getter = "GetItemIconPathRight")
	FString mItemIconPathRight;
	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter = "SetItemDescription", Getter = "GetItemDescription")
	FString mItemDescription;
	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter = "SetItemDescriptionLeft", Getter = "GetItemDescriptionLeft")
	FString mItemDescriptionLeft;
	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter = "SetItemName", Getter = "GetItemName")
	FString mItemName;
	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter = "SetItemTextDescription", Getter = "GetItemTextDescription")
	FString mItemTextDescription;

	FItemTable* mTable;
	EItemType mItemType;

	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter = "SetEatIconVisibility", Getter = "GetEatIconVisibility")
	bool EatIconCanVisible;
};
