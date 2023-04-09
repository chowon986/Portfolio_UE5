// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerInfoBase.h"
#include "../Character/LvPlayer.h"

void UPlayerInfoBase::NativeConstruct()
{
	Super::NativeConstruct();
	mHPBar = Cast<UProgressBar>(GetWidgetFromName(FName(TEXT("HPBar"))));
}

void UPlayerInfoBase::NativeTick(const FGeometry& _geo, float _DeltaTime)
{
	Super::NativeTick(_geo, _DeltaTime);

	if (false == mOnceCheck)
	{
		APlayerController* Controller = GetOwningLocalPlayer()->GetPlayerController(GetWorld());
		ALvPlayer* Character = Cast<ALvPlayer>(Controller->GetCharacter());

		if (IsValid(Character))
		{
			Character->OnPlayerHPChangedEvent.AddUObject(this, &UPlayerInfoBase::OnHPProgressBarChanged);
			OnHPProgressBarChanged(1);
			mOnceCheck = true;

			mMaxHP = Character->GetMaxHealth();
		}
	}
}

void UPlayerInfoBase::OnHPProgressBarChanged(float Value)
{
	mHPBar->SetPercent(Value / mMaxHP);

	if (Value <= 0)
	{
		APlayerController* Controller = GetOwningLocalPlayer()->GetPlayerController(GetWorld());
		ALvPlayer* Character = Cast<ALvPlayer>(Controller->GetCharacter());

		if (IsValid(Character))
		{
			Character->ServerDestroy(Character);
		}
	}
}
