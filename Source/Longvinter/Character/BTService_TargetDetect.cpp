// Fill out your copyright notice in the Description page of Project Settings.


#include "BTService_TargetDetect.h"
#include "MonsterAIController.h"
#include "ChickenBase.h"

UBTService_TargetDetect::UBTService_TargetDetect()
{
	NodeName = TEXT("TargetDetect");
	Interval = 2.0f;
	RandomDeviation = 0.1f;
}

void UBTService_TargetDetect::TickNode(
	UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory,
	float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	AMonsterAIController* AIController =
		Cast<AMonsterAIController>(OwnerComp.GetAIOwner());

	if (!IsValid(AIController))
		return;

	AChickenBase* Chicken = Cast<AChickenBase>(AIController->GetPawn());

	if (!IsValid(Chicken))
		return;

	FCollisionQueryParams	param(NAME_None, false, Chicken);

	TArray<FOverlapResult>	ResultArray;

	bool CollisionEnable = GetWorld()->OverlapMultiByChannel(ResultArray,
		Chicken->GetActorLocation(), FQuat::Identity,
		ECollisionChannel::ECC_GameTraceChannel8,
		FCollisionShape::MakeSphere(800),
		param);

#if ENABLE_DRAW_DEBUG

	// CollisionEnable �� true�̸� Red, false�̸� Green�� �����Ѵ�.
	FColor	DrawColor = CollisionEnable ? FColor::Red : FColor::Green;

	// FRotationMatrix::MakeFromZ(GetActorForwardVector()) : ������
	// �ٶ󺸴� ȸ������� ���� .ToQuat() �Լ��� �̿��Ͽ� ȸ�������
	// ȸ�������� ��ȯ���ش�.
	DrawDebugSphere(GetWorld(), Chicken->GetActorLocation(),
		800, 20,
		DrawColor, false, 0.3f);

#endif

	if (CollisionEnable)
		AIController->GetBlackboardComponent()->SetValueAsObject(TEXT("Target"), ResultArray[0].GetActor());

	else
	{
		AIController->GetBlackboardComponent()->SetValueAsObject(TEXT("Target"), nullptr);
	}
}

