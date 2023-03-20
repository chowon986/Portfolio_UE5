// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "PlayerCharacterBase.h"
#include "FishingSpot.h"
#include "LvPlayer.generated.h"

UENUM(BlueprintType)
enum class EPlayerState : uint8
{
	Idle,
	SwimmingIdle,
	Sit,
	SitIdle,
	SitWave,
	Aim,
	Fishing,
	Death
};

UCLASS()
class LONGVINTER_API ALvPlayer : public APlayerCharacterBase
{
	GENERATED_BODY()
	
public:
	ALvPlayer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UFUNCTION(Server, Reliable)
	void ServerSetState(EPlayerState State);

	void ServerSetFishingTimer();
	void ServerSetBanFishingTimer();
	void ServerOnFishingTimerExpired();
	void ServerOnBanFishingTimerExpired();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	void VerticalMove(float Scale);
	void HorizontalMove(float Scale);
	void Aim(float Scale);

	void Wave();
	void Sit();
	void Click();
	void Fishing();
	void InventoryOnOff();

	void SetState(EPlayerState State);
	EPlayerState GetState() { return mPlayerState; }
	bool GetCanFishing() { return mCanFishing; }
	bool GetFinishFishing() { return mFinishFishing; }
	class UInventoryComponent* GetInventoryComponent() { return mInventoryComponent; }

	UFUNCTION(Client, Unreliable)
	void ClientOnFishingFinished(int ItemID);

	UFUNCTION(Server, Reliable)
	void ServerAddInventoryItem(int ItemID);

	bool IsInventoryOpen();

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Component, meta = (AllowPrivateAccess = true))
	USpringArmComponent*	mSpringArm;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Component, meta = (AllowPrivateAccess = true))
	UCameraComponent*		mCamera;

	float mVerticalDir;

	AFishingSpot* FishingSpot;

	UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = true))
	EPlayerState mPlayerState;
	
	float mFishingTime;
	float mBanFishingTime;
	FTimerHandle FishingTimerHandle;
	FTimerHandle SetIdleStateTimerHandle;

	UPROPERTY(Replicated)
	bool mCanFishing;
	bool mFinishFishing;

	class UInventoryBase* InventoryBase;
	class UInventoryComponent* mInventoryComponent;

	int32 mPrevTime;

};
