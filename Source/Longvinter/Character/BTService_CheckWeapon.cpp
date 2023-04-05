// Fill out your copyright notice in the Description page of Project Settings.


#include "BTService_CheckWeapon.h"
#include "MonsterAIController.h"
#include "Terret.h"
#include "LvPlayer.h"
#include "../Component/EquipmentComponent.h"
#include "../Inventory/Inventory.h"

UBTService_CheckWeapon::UBTService_CheckWeapon()
{
	NodeName = TEXT("CheckWeapon");
	Interval = 0.5f;
	RandomDeviation = 0.1f;
}

void UBTService_CheckWeapon::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	AMonsterAIController* AIController =
		Cast<AMonsterAIController>(OwnerComp.GetAIOwner());

	if (!IsValid(AIController))
		return;

	ATerret* Terret = Cast<ATerret>(AIController->GetPawn());

	if (IsValid(Terret))
	{
		ALvPlayer* PlayerCharacter = Cast<ALvPlayer>(AIController->GetBlackboardComponent()->GetValueAsObject(TEXT("Target")));

		if (IsValid(PlayerCharacter))
		{
			TArray<int32> EquippedItems = PlayerCharacter->GetEquipmentComponent()->GetItems();

			for (int32 Item : EquippedItems)
			{
				FItemTable* Table = UInventory::GetInst(GetWorld())->GetInfoItem(Item);

				if (Table->EquipmentType == EEquipmentType::Equipment_Weapon_Gun ||
					Table->EquipmentType == EEquipmentType::Equipment_Weapon_Saw)
				{
					AIController->GetBlackboardComponent()->SetValueAsBool(TEXT("WithWeapon"), true);
					return;
				}
			}

			AIController->GetBlackboardComponent()->SetValueAsBool(TEXT("WithWeapon"), false);
		}
	}
}
