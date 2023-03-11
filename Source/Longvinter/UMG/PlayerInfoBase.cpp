// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerInfoBase.h"

void UPlayerInfoBase::NativeConstruct()
{
	Super::NativeConstruct();
	mHPBar = Cast<UProgressBar>(GetWidgetFromName(FName(TEXT("HPBar"))));
}

void UPlayerInfoBase::NativeTick(const FGeometry& _geo, float _DeltaTime)
{
	Super::NativeTick(_geo, _DeltaTime);

}
