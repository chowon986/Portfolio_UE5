// Fill out your copyright notice in the Description page of Project Settings.


#include "MainHUDBase.h"

void UMainHUDBase::NativeConstruct()
{
	Super::NativeConstruct();

	mPlayerInfo = Cast<UPlayerInfoBase>(GetWidgetFromName(FName(TEXT("UIPlayerInfo"))));
	mInventory = Cast<UInventoryBase>(GetWidgetFromName(FName(TEXT("UIInventory"))));
}

void UMainHUDBase::NativeTick(const FGeometry& _geo, float _DeltaTime)
{
	Super::NativeTick(_geo, _DeltaTime);
}