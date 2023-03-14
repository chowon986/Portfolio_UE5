// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "PlayerInfoBase.h"
#include "../UMG/InventoryBase.h"
#include "Blueprint/UserWidget.h"
#include "MainHUDBase.generated.h"

/**
 * 
 */
UCLASS()
class LONGVINTER_API UMainHUDBase : public UUserWidget
{
	GENERATED_BODY()

private:
	UPlayerInfoBase* mPlayerInfo;
	UInventoryBase* mInventory;

public:
	virtual void NativeConstruct() override;
	virtual void NativeTick(const FGeometry& _geo, float _DeltaTime) override;

	UInventoryBase* GetInventoryWidget() { return mInventory; }
};