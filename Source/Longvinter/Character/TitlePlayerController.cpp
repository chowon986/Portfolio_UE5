// Fill out your copyright notice in the Description page of Project Settings.


#include "TitlePlayerController.h"

ATitlePlayerController::ATitlePlayerController()
{
	PrimaryActorTick.bCanEverTick = true;
	bEnableClickEvents = true;

	if (IsLocalController())
	{
		static ConstructorHelpers::FClassFinder<UUserWidget> Finder(TEXT("WidgetBlueprint'/Game/UMG/UITitleHUD.UITitleHUD_C'"));
		if (Finder.Succeeded())
		{
			mTitleHUDClass = Finder.Class;
		}
	}
}

void ATitlePlayerController::BeginPlay()
{
	Super::BeginPlay();

	FInputModeGameAndUI	Mode;
	SetInputMode(Mode);
	bShowMouseCursor = true;

	if (IsLocalController() == true && IsValid(mTitleHUDClass))
	{
		// 생성한 객체의 주소를 m_MainHUD 에 받아둔다.
		mTitleHUD = Cast<UTitleHUDBase>(CreateWidget(GetWorld(), mTitleHUDClass));
		if (IsValid(mTitleHUD))
		{
			mTitleHUD->AddToViewport();
		}
	}
}

void ATitlePlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ATitlePlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
}

void ATitlePlayerController::PostInitializeComponents()
{
	Super::PostInitializeComponents();
}

void ATitlePlayerController::OnPossess(APawn* aPawn)
{
	Super::OnPossess(aPawn);
}

void ATitlePlayerController::OnUnPossess()
{
	Super::OnUnPossess();
}
