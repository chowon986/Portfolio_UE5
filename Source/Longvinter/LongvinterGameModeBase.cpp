// Copyright Epic Games, Inc. All Rights Reserved.


#include "LongvinterGameModeBase.h"
#include "Character/LvPlayer.h"
#include "Character/LvPlayerController.h"

ALongvinterGameModeBase::ALongvinterGameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;
	DefaultPawnClass = ALvPlayer::StaticClass();
	PlayerControllerClass = ALvPlayerController::StaticClass();

	ConstructorHelpers::FClassFinder<UUserWidget>
		finder(TEXT("WidgetBlueprint'/Game/UMG/UIMainHUD.UIMainHUD_C'"));
	if (finder.Succeeded())
	{
		m_StartHUDClass = finder.Class;
	}
}

void ALongvinterGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	if (IsValid(m_StartHUDClass))
	{
		// ������ ��ü�� �ּҸ� m_MainHUD �� �޾Ƶд�.
		m_StartHUD = Cast<UUserWidget>(CreateWidget(GetWorld(), m_StartHUDClass));
		if (IsValid(m_StartHUD))
		{
			m_StartHUD->AddToViewport();
		}
	}
}

void ALongvinterGameModeBase::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);

}

void ALongvinterGameModeBase::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);

}

void ALongvinterGameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
