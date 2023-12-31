// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include <Components\Button.h>
#include <Components\EditableTextBox.h>
#include "Blueprint/UserWidget.h"
#include "ChatWidgetBase.generated.h"

/**
 * 
 */
UCLASS()
class LONGVINTER_API UChatWidgetBase : public UUserWidget
{
	GENERATED_BODY()
	
public:
	virtual void NativeConstruct() override;
	virtual void NativeDestruct();
	virtual void NativeTick(const FGeometry& _geo, float _DeltaTime);

public:
	UFUNCTION()
		void OnSendBtnClicked();

private:
	UButton* mSendBtn;
	UEditableTextBox* mInputText;
};
