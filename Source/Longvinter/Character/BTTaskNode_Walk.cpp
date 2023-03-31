// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTaskNode_Walk.h"
#include "MonsterAIController.h"
#include "ChickenBase.h"

UBTTaskNode_Walk::UBTTaskNode_Walk()
{
	NodeName = TEXT("Walk");
	bNotifyTick = true;
	bNotifyTaskFinished = true;
}

EBTNodeResult::Type UBTTaskNode_Walk::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
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

	if (false == AIController->GetBlackboardComponent()->GetValueAsBool(TEXT("IsWalking")))
	{
		AIController->StopMovement();

		return EBTNodeResult::Failed;
	}

	Chicken->SetState(EChickenState::Walk);

	return EBTNodeResult::InProgress;
}

EBTNodeResult::Type UBTTaskNode_Walk::AbortTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	EBTNodeResult::Type result = Super::AbortTask(OwnerComp,
		NodeMemory);

	return result;
}

void UBTTaskNode_Walk::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
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

	if (false == AIController->GetBlackboardComponent()->GetValueAsBool(TEXT("IsWalking")))
	{
		AIController->StopMovement();

		FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
		return;
	}

	Chicken->SetState(EChickenState::Walk);
}

void UBTTaskNode_Walk::OnTaskFinished(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, EBTNodeResult::Type TaskResult)
{
	Super::OnTaskFinished(OwnerComp, NodeMemory, TaskResult);
}
