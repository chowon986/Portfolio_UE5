// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../GameInfo.h"
#include "GameFramework/Actor.h"
#include "DecoBase.generated.h"

UCLASS()
class LONGVINTER_API ADecoBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADecoBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SetOpacity(float Opacity);
	void SetColor(FVector4 Color);
	void SetItemID(int32 itemID) { mItemID = itemID; }

	int32 GetItemID() { return mItemID; }
	bool IsSetupEnabled() { return mIsSetupEnabled; }

private:
	UPROPERTY(VisibleAnywhere)
	UBoxComponent* mBox;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* mStaticMesh;

	UPROPERTY(EditAnywhere)
	FVector4 DisableColor;

	UPROPERTY(EditAnywhere)
	FVector4 EnableColor;

	float mOpacity;
	bool mIsSetupEnabled;

	UPROPERTY(Replicated)
	int32 mItemID;
};
