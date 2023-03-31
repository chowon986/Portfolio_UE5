// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "UObject/NoExportTypes.h"
#include "ItemDataBase.generated.h"

/**
 * 
 */
UCLASS()
class LONGVINTER_API UItemDataBase : public UObject
{
	GENERATED_BODY()

public:
	UItemDataBase();
	~UItemDataBase();
	
public:
	void SetItemIconPath(const FString& Path) { mItemIconPath = Path; }
	const FString& GetItemIconPath() { return mItemIconPath; }

	void SetItemIconPathRight(const FString& Path) { mItemIconPathRight = Path; }
	const FString& GetItemIconPathRight() { return mItemIconPathRight; }

	void SetItemDescription(const FString& Desc) { mItemDescription = Desc; }
	const FString& GetItemDescription() { return mItemDescription; }

	void SetItemDescriptionLeft(const FString& Desc) { mItemDescriptionLeft = Desc; }
	const FString& GetItemDescriptionLeft() { return mItemDescriptionLeft; }

	void SetItemName(const FString& Name) { mItemName = Name; }
	const FString& GetItemName() { return mItemName; }

	void SetItemDesc(const FString& Desc) { mItemTextDescription = Desc; }
	const FString& GetItemDesc() { return mItemTextDescription; }

	void SetItemID(int ID) { mItemID = ID; }
	int GetItemID() { return mItemID; }

	void SetItemType(EItemType Type) { mItemType = Type; }
	EItemType GetItemType() { return mItemType; }

private:
	FString mItemIconPath;
	FString mItemIconPathRight;
	FString mItemDescription;
	FString mItemDescriptionLeft;
	FString mItemName;
	FString mItemTextDescription;
	int mItemID;
	EItemType mItemType;
};
