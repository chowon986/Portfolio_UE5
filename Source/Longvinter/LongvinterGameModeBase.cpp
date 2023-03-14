// Copyright Epic Games, Inc. All Rights Reserved.


#include "LongvinterGameModeBase.h"
#include "Character/LvPlayer.h"
#include "Character/LvPlayerController.h"

ALongvinterGameModeBase::ALongvinterGameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;
	DefaultPawnClass = ALvPlayer::StaticClass();
	PlayerControllerClass = ALvPlayerController::StaticClass();

	static ConstructorHelpers::FClassFinder<UUserWidget>
		finder(TEXT("WidgetBlueprint'/Game/UMG/UIMainHUD.UIMainHUD_C'"));
	if (finder.Succeeded())
	{
		m_MainHUDClass = finder.Class;
	}
}

void ALongvinterGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	if (IsValid(m_MainHUDClass))
	{
		// 생성한 객체의 주소를 m_MainHUD 에 받아둔다.
		m_MainHUD = Cast<UMainHUDBase>(CreateWidget(GetWorld(), m_MainHUDClass));
		if (IsValid(m_MainHUD))
		{
			m_MainHUD->AddToViewport();
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
