// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTaskNode_Idle.h"
#include "MonsterAIController.h"
#include "ChickenBase.h"

UBTTaskNode_Idle::UBTTaskNode_Idle()
{
	NodeName = TEXT("Idle");
	bNotifyTick = true;
	bNotifyTaskFinished = true;
}

EBTNodeResult::Type UBTTaskNode_Idle::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	EBTNodeResult::Type result = Super::ExecuteTask(OwnerComp,
		NodeMemory);

	AMonsterAIController* AIController =
		Cast<AMonsterAIController>(OwnerComp.GetAIOwner());

	if (!IsValid(AIController))
		return EBTNodeResult::Failed;

	AChickenBase* Chicken = Cast<AChickenBase>(AIController->GetPawn());

	if (!IsValid(Chicken))
		return EBTNodeResult::Failed;

	AActor* Target = Cast<AActor>(AIController->GetBlackboardComponent()->GetValueAsObject(TEXT("Target")));

	if (IsValid(Target))
	{
		AIController->StopMovement();

		return EBTNodeResult::Failed;
	}

	Chicken->Idle();

	return EBTNodeResult::InProgress;
}

EBTNodeResult::Type UBTTaskNode_Idle::AbortTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	EBTNodeResult::Type result = Super::AbortTask(OwnerComp,
		NodeMemory);

	return result;
}

void UBTTaskNode_Idle::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickTask(OwnerComp, NodeMemory, DeltaSeconds);

	AMonsterAIController* AIController =
		Cast<AMonsterAIController>(OwnerComp.GetAIOwner());

	if (!IsValid(AIController))
	{
		FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
		return;
	}

	AChickenBase* Chicken = Cast<AChickenBase>(AIController->GetPawn());

	if (!IsValid(Chicken))
	{
		FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
		return;
	}

	ACharacter* Target = Cast<ACharacter>(AIController->GetBlackboardComponent()->GetValueAsObject(TEXT("Target")));

	if (IsValid(Target))
	{
		AIController->StopMovement();

		FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
		return;
	}

	Chicken->Idle();
}

void UBTTaskNode_Idle::OnTaskFinished(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, EBTNodeResult::Type TaskResult)
{
	Super::OnTaskFinished(OwnerComp, NodeMemory, TaskResult);
}