// Fill out your copyright notice in the Description page of Project Settings.


#include "ChatWidgetBase.h"
#include "../Character/LvPlayerController.h"
#include "GameFramework/PlayerState.h"

void UChatWidgetBase::NativeConstruct()
{
	Super::NativeConstruct();

	mSendBtn = Cast<UButton>(GetWidgetFromName(FName(TEXT("SendButton"))));
	mInputText = Cast<UEditableTextBox>(GetWidgetFromName(FName(TEXT("InputText"))));

	// StartBtn 에 클릭, 호버, 언호버 상황이 발생할 때 호출 시킬 델리게이트 등록
	mSendBtn->OnClicked.AddDynamic(this, &UChatWidgetBase::OnSendBtnClicked);

}

void UChatWidgetBase::NativeDestruct()
{
	Super::NativeDestruct();
}

void UChatWidgetBase::NativeTick(const FGeometry& _geo, float _DeltaTime)
{
	Super::NativeTick(_geo, _DeltaTime);

}

void UChatWidgetBase::OnSendBtnClicked()
{
	FString	Text = mInputText->Text.ToString();

	APlayerController* Controller = GetOwningLocalPlayer()->GetPlayerController(GetWorld());
	if (ALvPlayerController* PlayerController = Cast<ALvPlayerController>(Controller))
	{
		UNetworkComponent* NetworkComponent = PlayerController->GetNetworkComponent();
		APlayerState* PlayerState = PlayerController->PlayerState;

		NetworkComponent->Send(Text, PlayerState->GetPlayerId());
	}
}
