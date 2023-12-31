// Fill out your copyright notice in the Description page of Project Settings.


#include "LvPlayerController.h"
#include "FishingSpot.h"
#include "VendorBase.h"
#include "CampFire.h"
#include "LvPlayer.h"
#include "ChickenBase.h"
#include "../Inventory/Inventory.h"
#include "../Component/InventoryComponent.h"
#include "../UMG/SgtLakeVenderBase.h"
#include "Mushroom.h"

ALvPlayerController::ALvPlayerController()
{
	PrimaryActorTick.bCanEverTick = true;
	bEnableClickEvents = true;

	//if (IsLocalController())
	//{
	//	static ConstructorHelpers::FClassFinder<UUserWidget>
	//		finder(TEXT("WidgetBlueprint'/Game/UMG/UIMainHUD.UIMainHUD_C'"));
	//	if (finder.Succeeded())
	//	{
	//		m_MainHUDClass = finder.Class;
	//	}
	//}

	mAudio = CreateDefaultSubobject<UAudioComponent>(TEXT("Audio"));
	mAudio->bIsUISound = true;
	mNetworkComponent = CreateDefaultSubobject<UNetworkComponent>(TEXT("Network"));
}

void ALvPlayerController::BeginPlay()
{
	Super::BeginPlay();

	FInputModeGameAndUI	Mode;
	SetInputMode(Mode);
	bShowMouseCursor = true;

	ENetMode NetMode = GetNetMode();
	ENetRole _RemoteRole = GetRemoteRole();

	if (IsLocalController() == true && IsValid(m_MainHUDClass))
	{
		// 생성한 객체의 주소를 m_MainHUD 에 받아둔다.
		m_MainHUD = Cast<UMainHUDBase>(CreateWidget(GetWorld(), m_MainHUDClass));
		if (IsValid(m_MainHUD))
		{
			m_MainHUD->AddToViewport();
		}
	}

	mAudio->SetSound(mBGM);
	mAudio->Play();
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
