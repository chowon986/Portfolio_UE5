// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include <Components/TextBlock.h>
#include "Blueprint/UserWidget.h"
#include "SpeechBalloonBase.generated.h"

/**
 * 
 */
UCLASS()
class LONGVINTER_API USpeechBalloonBase : public UUserWidget
{
	GENERATED_BODY()
	
public:
	virtual void NativeConstruct() override;
	virtual void NativeTick(const FGeometry& _geo, float _DeltaTime) override;


private:
	void OnChatMessageReceived(const FString& Text, int32 PlayerId);

private:
	UTextBlock* mSpeechBalloon;
	bool mOnceCheck;
};
