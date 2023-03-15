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

		// MainHUD->GetVendorWidget�� �� ��� Vendor�� �θ� Ŭ������ ĳ�����ؼ�
		// ���⼭ Cast�� VendorWidet �ٲٰ� �Ʒ��� �����ֱ� �ϸ� �� ��

		if (true == Value)
		{
			VendorWidget->SetVisibility(ESlateVisibility::Visible);
		}
		else
		{
			// ���� ���� �Ѿ�� ������ �ϸ� �� ��
			VendorWidget->SetVisibility(ESlateVisibility::Hidden);
		}
	}
}

void AVendorBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
