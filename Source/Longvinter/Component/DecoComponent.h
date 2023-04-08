// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DecoComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class LONGVINTER_API UDecoComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDecoComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void SpawnPreviewDecoItem(int32 ItemID);

	void OnClick();

	UFUNCTION(Server, Reliable)
	void ServerSpawnDecoItem(int32 ItemID, FVector Location, FRotator Rotation);

	ADecoBase* GetTent() { return mTent; }

private:
	UPROPERTY(Replicated)
	TArray<int32> mItems;

	UPROPERTY()
	class ADecoBase* mPreviewDecoItem;

	UPROPERTY()
	class ADecoBase* mTent;
};
