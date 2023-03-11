// Fill out your copyright notice in the Description page of Project Settings.


#include "LvPlayerController.h"
#include "FishingSpot.h"
#include "VendorBase.h"
#include "LvPlayer.h"

ALvPlayerController::ALvPlayerController()
{
	PrimaryActorTick.bCanEverTick = true;
	bShowMouseCursor = true;
	bEnableClickEvents = true;
}

void ALvPlayerController::BeginPlay()
{
	Super::BeginPlay();

	FInputModeGameAndUI	Mode;
	SetInputMode(Mode);
}

void ALvPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ALvPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
}

void ALvPlayerController::PostInitializeComponents()
{
	Super::PostInitializeComponents();
}

void ALvPlayerController::OnPossess(APawn* aPawn)
{
	Super::OnPossess(aPawn);
}

void ALvPlayerController::OnUnPossess()
{
	Super::OnUnPossess();
}

void ALvPlayerController::Click()
{
	FHitResult result;
	bool Hit = GetHitResultUnderCursor(ECollisionChannel::ECC_GameTraceChannel3, false, result);

	if (Hit)
	{
		AFishingSpot* Spot = Cast<AFishingSpot>(result.GetActor());

		if (IsValid(Spot))
		{
			ALvPlayer* PlayerCharacter = Cast<ALvPlayer>(GetCharacter());
			if (IsValid(PlayerCharacter))
			{
				if (PlayerCharacter->GetCanFishing() == true)
				{
					PlayerCharacter->Fishing();
				}
			}
		}

		AVendorBase* Vendor = Cast<AVendorBase>(result.GetActor());
		if (IsValid(Vendor))
		{
			PrintViewport(1.f, FColor::Red, TEXT("ClickVendor"));
		}
	}
}
