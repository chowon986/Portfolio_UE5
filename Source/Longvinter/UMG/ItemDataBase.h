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

	void SetItemDescription(const FString& _Desc) { mItemDescription = _Desc; }
	const FString& GetItemDescription() { return mItemDescription; }

	void SetItemID(int ID) { mItemID = ID; }
	int GetItemID() { return mItemID; }

private:
	FString mItemIconPath;
	FString mItemDescription;
	int mItemID;
};
