// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameInfo.h"
#include "Engine/GameInstance.h"
#include "LvGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class LONGVINTER_API ULvGameInstance : public UGameInstance
{
	GENERATED_BODY()

	friend class UInventory;
	
public:
	ULvGameInstance();
	~ULvGameInstance();

public:
	virtual void Init();

private:
	UDataTable* mItemTable;
	UDataTable* mBuffTable;
	class UInventory* mInventory;
};
