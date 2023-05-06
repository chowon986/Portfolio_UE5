// Fill out your copyright notice in the Description page of Project Settings.


#include "LvPlayerStateViewModel.h"
#include "../Character/LvPlayer.h"

ULvPlayerStateViewModel::ULvPlayerStateViewModel()
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
					Character->OnPlayerHPChangedEvent.AddUObject(this, &ULvPlayerStateViewModel::OnPlayerHPChanged);
					mMaxHealth = Character->GetMaxHealth();
					SetCurrentHealth(Character->GetCurrentHealth());

				}
			}
		}
		
	}
}

void ULvPlayerStateViewModel::SetCurrentHealth(float NewCurrentHealth)
{
	if (mCurrentHealth != NewCurrentHealth)
	{
		UE_MVVM_SET_PROPERTY_VALUE(mCurrentHealth, NewCurrentHealth);
		UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(GetHealthPercent);
	}
}

void ULvPlayerStateViewModel::OnPlayerHPChanged(float HP)
{
	SetCurrentHealth(HP);
}
