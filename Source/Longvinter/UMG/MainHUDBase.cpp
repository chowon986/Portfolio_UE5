// Fill out your copyright notice in the Description page of Project Settings.


#include "MainHUDBase.h"

void UMainHUDBase::NativeConstruct()
{
	Super::NativeConstruct();

	m_PlayerInfo = Cast<UPlayerInfoBase>(GetWidgetFromName(FName(TEXT("UIPlayerInfo"))));
}

void UMainHUDBase::NativeTick(const FGeometry& _geo, float _DeltaTime)
{
	Super::NativeTick(_geo, _DeltaTime);
}
