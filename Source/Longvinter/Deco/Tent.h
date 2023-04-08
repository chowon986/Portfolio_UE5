// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "DecoBase.h"
#include "Tent.generated.h"

/**
 * 
 */
UCLASS()
class LONGVINTER_API ATent : public ADecoBase
{
	GENERATED_BODY()

public:
	ATent();

public:
	UFUNCTION()
	void OnRep_IsUpgraded();

	void SetIsUpgraded(bool Value) { mIsUpgraded = Value; }
	bool IsUpgraded() { return mIsUpgraded; }
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	
private:
	UPROPERTY(ReplicatedUsing = OnRep_IsUpgraded)
	bool mIsUpgraded;


	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* mUpgradeStaticMesh;
};
