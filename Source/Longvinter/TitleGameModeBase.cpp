// Fill out your copyright notice in the Description page of Project Settings.


#include "TitleGameModeBase.h"

ATitleGameModeBase::ATitleGameModeBase()
{
	ConstructorHelpers::FClassFinder<UUserWidget> Finder(TEXT("WidgetBlueprint'/Game/UMG/UITitleHUD.UITitleHUD_C'"));

	if (Finder.Succeeded())
	{
		mTitleHUDClass = Finder.Class;
	}
}

void ATitleGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	if (IsValid(mTitleHUDClass))
	{
		mTitleHUD = Cast<UTitleHUDBase>(CreateWidget(GetWorld(), mTitleHUDClass));
		if (IsValid(mTitleHUD))
		{
			mTitleHUD->AddToViewport();
		}
	}
}

void ATitleGameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
