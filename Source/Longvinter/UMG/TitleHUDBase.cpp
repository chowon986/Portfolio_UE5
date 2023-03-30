// Fill out your copyright notice in the Description page of Project Settings.


#include "TitleHUDBase.h"

void UTitleHUDBase::NativeConstruct()
{
	Super::NativeConstruct();

	mTitle = Cast<UTitleBase>(GetWidgetFromName(FName(TEXT("UITitle"))));
	mTitle->SetVisibility(ESlateVisibility::Visible);
}

void UTitleHUDBase::NativeTick(const FGeometry& _geo, float _DeltaTime)
{
	Super::NativeTick(_geo, _DeltaTime);

}
