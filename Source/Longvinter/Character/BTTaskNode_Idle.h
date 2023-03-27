// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTaskNode_Idle.generated.h"

/**
 * 
 */
UCLASS()
class LONGVINTER_API UBTTaskNode_Idle : public UBTTaskNode
{
	GENERATED_BODY()
	
public:
	UBTTaskNode_Idle();

protected:
	virtual EBTNodeResult::Type ExecuteTask(
		UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory);
	virtual EBTNodeResult::Type AbortTask(
		UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory);
	virtual void TickTask(UBehaviorTreeComponent& OwnerComp,
		uint8* NodeMemory, float DeltaSeconds);
	virtual void OnTaskFinished(UBehaviorTreeComponent& OwnerComp,
		uint8* NodeMemory, EBTNodeResult::Type TaskResult);
};
