// Fill out your copyright notice in the Description page of Project Settings.


#include "TestGameModeBase.h"

ATestGameModeBase::ATestGameModeBase()
{
	ConstructorHelpers::FClassFinder<UUserWidget> finder(TEXT("WidgetBlueprint'/Game/UMG/UIMainHUD.UIMainHUD_C'"));

	if (finder.Succeeded())
	{
		mTestHUDClass = finder.Class;
	}
}

void ATestGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	if (IsValid(mTestHUDClass))
	{
		// ������ ��ü�� �ּҸ� m_MainHUD �� �޾Ƶд�.
		mTestHUD = Cast<UUserWidget>(CreateWidget(GetWorld(), mTestHUDClass));
		if (IsValid(mTestHUD))
		{
			mTestHUD->AddToViewport();
		}
	}
}

void ATestGameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
