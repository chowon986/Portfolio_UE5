// Fill out your copyright notice in the Description page of Project Settings.


#include "SpeechBalloonBase.h"
#include "../Character/LvPlayerController.h"
#include "../Character/LvPlayer.h"
#include "../Component/NetworkComponent.h"

void USpeechBalloonBase::NativeConstruct()
{
	Super::NativeConstruct();
	mSpeechBalloon = Cast<UTextBlock>(GetWidgetFromName(TEXT("Balloon")));
	mOnceCheck = false;
}

void USpeechBalloonBase::NativeTick(const FGeometry& _geo, float _DeltaTime)
{
	Super::NativeTick(_geo, _DeltaTime);

	if (mOnceCheck == false)
	{
		ALvPlayerController* Controller = Cast<ALvPlayerController>(GetOwningLocalPlayer()->GetPlayerController(GetWorld()));
		if (IsValid(Controller))
		{
			UNetworkComponent* Component = Controller->GetNetworkComponent();
			Component->OnChatMessageReceivedEvent.AddUObject(this, &USpeechBalloonBase::OnChatMessageReceived);
			Component->OnChatMessageSentEvent.AddUObject(this, &USpeechBalloonBase::OnChatMessageSent);
			mOnceCheck = true;
		}
	}
}

void USpeechBalloonBase::OnChatMessageReceived(const FString& Text, int32 PlayerId)
{
	ShowSpeechBalloon(Text, PlayerId);
}

void USpeechBalloonBase::OnChatMessageSent(const FString& Text, int32 PlayerId)
{
	ShowSpeechBalloon(Text, PlayerId);
}

void USpeechBalloonBase::OnSpeechBalloonTimerExpired()
{
	mSpeechBalloon->SetVisibility(ESlateVisibility::Collapsed);
}

void USpeechBalloonBase::ShowSpeechBalloon(const FString& Text, int32 PlayerId)
{
	for (AActor* Actor : GetWorld()->GetCurrentLevel()->Actors)
	{
		if (ALvPlayer* LvPlayer = Cast<ALvPlayer>(Actor))
		{
			if (LvPlayer->mWidgetComopnent->GetWidget() == this)
			{
				int32 Id = LvPlayer->GetPlayerState()->PlayerId;
				if (PlayerId == Id)
				{
					mSpeechBalloon->SetText(FText::FromString(Text));
					mSpeechBalloon->SetVisibility(ESlateVisibility::Visible);
					if (mTimerHandle.IsValid())
					{
						GetWorld()->GetTimerManager().ClearTimer(mTimerHandle);
						mTimerHandle.Invalidate();
					}
					GetWorld()->GetTimerManager().SetTimer(mTimerHandle, FTimerDelegate::CreateUObject(this, &USpeechBalloonBase::OnSpeechBalloonTimerExpired), 5.f, false);
				}
			}
		}
	}
}
