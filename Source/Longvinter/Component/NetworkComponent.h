// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "Components/ActorComponent.h"
#include "NetworkComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class LONGVINTER_API UNetworkComponent : public UActorComponent
{
	GENERATED_BODY()
	DECLARE_EVENT_TwoParams(UNetworkComponent, ChatMessageReceivedEvent, const FString&, int32)
	DECLARE_EVENT_TwoParams(UNetworkComponent, ChatMessageSentEvent, const FString&, int32)


public:	
	// Sets default values for this component's properties
	UNetworkComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void Send(const FString& Text, int32 Id);

private:
	class CPacketQueue* mQueue;
	class CNetworkManager* mInst;

public:
	ChatMessageReceivedEvent OnChatMessageReceivedEvent;
	ChatMessageSentEvent OnChatMessageSentEvent;
};
