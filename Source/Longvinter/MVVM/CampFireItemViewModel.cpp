// Fill out your copyright notice in the Description page of Project Settings.


#include "CampFireItemViewModel.h"
#include "../Character/LvPlayer.h"
#include "../Component/CraftComponent.h"

UCampFireItemViewModel::UCampFireItemViewModel()
{
	UWorld* World = GetWorld();
	if (World)
	{
		ULocalPlayer* LocalPlayer = World->GetFirstLocalPlayerFromController();
		if (LocalPlayer)
		{
			APlayerController* Controller = LocalPlayer->GetPlayerController(GetWorld());
			if (IsValid(Controller))
			{
				ALvPlayer* Character = Cast<ALvPlayer>(Controller->GetCharacter());

				if (IsValid(Character))
				{
					UCraftComponent* Component = Character->GetCraftComponent();
					Component->OnProgressBarChangedEvent.AddUObject(this, &UCampFireItemViewModel::OnProgressBarChanged);
					OnProgressBarChanged(0);
				}
			}
		}

	}
}

void UCampFireItemViewModel::SetCurrentProgressRatio(float NewCurrentRatio)
{
	if (mCurrentRatio != NewCurrentRatio)
	{
		UE_MVVM_SET_PROPERTY_VALUE(mCurrentRatio, NewCurrentRatio);
		UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(GetCurrentProgressRatio);
	}
}

void UCampFireItemViewModel::OnProgressBarChanged(float Ratio)
{
	SetCurrentProgressRatio(Ratio);
}
