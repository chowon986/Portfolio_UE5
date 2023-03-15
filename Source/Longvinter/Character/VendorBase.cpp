// Fill out your copyright notice in the Description page of Project Settings.


#include "VendorBase.h"
#include "../UMG/MainHUDBase.h"
#include "../UMG/SgtLakeVenderBase.h"
#include "../LongvinterGameModeBase.h"

AVendorBase::AVendorBase()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AVendorBase::BeginPlay()
{
	Super::BeginPlay();
}

void AVendorBase::ShopOnOff(bool Value)
{
	int32 CurTime = 0;
	float CurPartial = 0.f;
	UGameplayStatics::GetAccurateRealTime(CurTime, CurPartial);

	if (CurTime - mPrevTime < 1)
		return;

	mPrevTime = CurTime;

	if (GetLocalRole() == ROLE_Authority)
	{
		ALongvinterGameModeBase* GameModeBase = Cast<ALongvinterGameModeBase>(GetWorld()->GetAuthGameMode());
		if (nullptr == GameModeBase)
			return;

		UMainHUDBase* MainHUD = GameModeBase->GetMainHUD();
		USgtLakeVenderBase* VendorWidget = MainHUD->GetVendorWidget();

		// MainHUD->GetVendorWidget할 때 모든 Vendor의 부모 클래스로 캐스팅해서
		// 여기서 Cast로 VendorWidet 바꾸고 아래서 보여주기 하면 될 듯

		if (true == Value)
		{
			VendorWidget->SetVisibility(ESlateVisibility::Visible);
		}
		else
		{
			// 일정 범위 넘어가면 꺼지게 하면 될 듯
			VendorWidget->SetVisibility(ESlateVisibility::Hidden);
		}
	}
}

void AVendorBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
