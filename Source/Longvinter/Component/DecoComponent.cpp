// Fill out your copyright notice in the Description page of Project Settings.


#include "DecoComponent.h"
#include "Net/UnrealNetwork.h"
#include "../Character/LvPlayerController.h"
#include "../Character/LvPlayer.h"
#include <Longvinter/Inventory/Inventory.h>
#include "../UMG/ItemDataBase.h"
#include "../Deco/DecoBase.h"
#include "../Deco/Tent.h"
#include "../Component/InventoryComponent.h"

// Sets default values for this component's properties
UDecoComponent::UDecoComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UDecoComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...

}

void UDecoComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION(UDecoComponent, mItems, COND_AutonomousOnly);
}

void UDecoComponent::SpawnPreviewDecoItem(int32 ItemID)
{
	FItemTable* Table = UInventory::GetInst(GetWorld())->GetInfoItem(ItemID);
	if (Table->DecoClass != nullptr)
	{
		FActorSpawnParameters Param;
		Param.Owner = GetOwner();

		mPreviewDecoItem = GetWorld()->SpawnActor<ADecoBase>(Table->PreviewDecoClass, GetOwner()->GetTransform(), Param);
		mPreviewDecoItem->SetOpacity(0.5f);
		mPreviewDecoItem->SetItemID(ItemID);
	}
}

void UDecoComponent::OnClick()
{
	if (IsValid(mPreviewDecoItem) && mPreviewDecoItem->IsSetupEnabled())
	{
		int32 ItemID = mPreviewDecoItem->GetItemID();
		ServerSpawnDecoItem(ItemID, mPreviewDecoItem->GetActorLocation(), mPreviewDecoItem->GetActorRotation());
		mPreviewDecoItem->Destroy();
		if (auto* LvPlayer = GetOwner<ALvPlayer>())
		{
			LvPlayer->GetInventoryComponent()->ServerRemoveItem(ItemID);
		}
	}
}

void UDecoComponent::ServerCraft_Implementation()
{
	if (IsValid(mTent))
	{
		mTent->SetIsUpgraded(true);
	}
}

void UDecoComponent::ServerSpawnDecoItem_Implementation(int32 ItemID, FVector Location, FRotator Rotation)
{
	FItemTable* Table = UInventory::GetInst(GetWorld())->GetInfoItem(ItemID);
	if (Table->DecoClass != nullptr)
	{
		FActorSpawnParameters Param;
		Param.Owner = GetOwner();

		ADecoBase* Deco = GetWorld()->SpawnActor<ADecoBase>(Table->DecoClass, Location, FRotator::ZeroRotator, Param);

		if (ATent* Tent = Cast<ATent>(Deco))
		{
			mTent = Tent;
		}
	}
}


// Called every frame
void UDecoComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);


	if (IsValid(mPreviewDecoItem))
	{
		ALvPlayer* LvPlayer = Cast<ALvPlayer>(GetOwner());
		if (IsValid(LvPlayer))
		{
			if (LvPlayer->GetLocalRole() == ROLE_AutonomousProxy)
			{
				ALvPlayerController* LvPlayerController = LvPlayer->GetController<ALvPlayerController>();
				if (IsValid(LvPlayerController))
				{
					FVector WorldLocation, WorldDirection;
					if (LvPlayerController->DeprojectMousePositionToWorld(WorldLocation, WorldDirection))
					{
						FHitResult Result;
						if (GetWorld()->LineTraceSingleByChannel(Result, WorldLocation, WorldLocation + WorldDirection * 10000, ECollisionChannel::ECC_WorldStatic))
						{
							mPreviewDecoItem->SetActorLocation(Result.ImpactPoint + FVector(0,0,5));
						}
					}
				}
			}
		}
	}

}

