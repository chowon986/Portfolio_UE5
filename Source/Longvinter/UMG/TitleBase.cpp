// Fill out your copyright notice in the Description page of Project Settings.


#include "TitleBase.h"

void UTitleBase::NativeConstruct()
{
	Super::NativeConstruct();

	mStartBtn = Cast<UButton>(GetWidgetFromName(FName("StartBtn")));
	mStartBtn->OnClicked.AddDynamic(this, &UTitleBase::ClickStartBtn);
}

void UTitleBase::NativeTick(const FGeometry& _geo, float _DeltaTime)
{
	Super::NativeTick(_geo, _DeltaTime);
}

void UTitleBase::ClickStartBtn()
{
	if (!mNextLevel.IsNone())
	{
		UGameplayStatics::OpenLevel(GetWorld(), mNextLevel);
	}
}
