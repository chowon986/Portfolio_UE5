// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "UObject/NoExportTypes.h"
#include "Inventory.generated.h"

/**
 * 
 */
UCLASS()
class LONGVINTER_API UInventory : public UObject
{
	GENERATED_BODY()

public:
	UInventory();
	~UInventory();

public:
	static UInventory* GetInst(UWorld* World);

	UFUNCTION(BlueprintCallable)
	static UInventory* GetInst(UGameInstance* _GameInst);

	UFUNCTION(BlueprintCallable)
	void SetItemTable(UDataTable* Table);
	void UpdateItems(TArray<int32> Items);

	FItemTable* GetInfoItem(int ItemID);

	bool IsInventoryOpen();

	static UWorld* GetWorld() { return mCurWorld; }

private:
	static UWorld* mCurWorld;

public:
	UDataTable* mItemTable;
};
