// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "BehaviorTree/BTService.h"
#include "BTService_RandomState.generated.h"

/**
 * 
 */
UCLASS()
class LONGVINTER_API UBTService_RandomState : public UBTService
{
	GENERATED_BODY()
	
public:
	UBTService_RandomState();

protected:
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
};
