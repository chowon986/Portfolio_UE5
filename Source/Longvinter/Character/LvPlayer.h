// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "PlayerCharacterBase.h"
#include "FishingSpot.h"
#include "EquipmentActor.h"
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
	GetItem,
	Death
};


UCLASS()
class LONGVINTER_API ALvPlayer : public APlayerCharacterBase
{
	GENERATED_BODY()

	DECLARE_EVENT_OneParam(ALvPlayer, ActorClickedEvent, AActor*)
	DECLARE_EVENT(ALvPlayer, InventoryOnOffEvent)
	
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
	void CheckSuccessedFishing();
	void ServerOnPendingClientResponseTimerExpired();

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
	class UCraftComponent* GetCraftComponent() { return mCraftComponent; }
	class UEquipmentComponent* GetEquipmentComponent() { return mEquipmentComponent; }
	class UPlaceholder* GetPlaceholder() { return mPlaceholder; }

	UFUNCTION(Client, Reliable)
	void ClientOnFishingFinished();

	UFUNCTION(Client, Reliable)
	void ClientNotifyPressE();

	UFUNCTION(Server, Reliable)
	void ServerEKeyPressed();

	UFUNCTION(Server, Reliable)
	void ServerDestroy(AActor* Actor);

	UFUNCTION(Server, Reliable)
	void ServerAttack(AActor* Actor, float Damage);

	UFUNCTION()
	void Fire();

	int32 GetAmmoCount() { return mAmmoCount; }

	AEquipmentActor* GetHat() { return mHat; }
	void SetHat(int32 ItemID);

public:
	ActorClickedEvent OnActorClickedEvent;
	InventoryOnOffEvent OnInventoryOnOffEvent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Component, meta = (AllowPrivateAccess = true))
	USpringArmComponent*	mSpringArm;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Component, meta = (AllowPrivateAccess = true))
	UCameraComponent*		mCamera;

	float mVerticalDir;

	UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = true))
	EPlayerState mPlayerState;
	
	float mFishingTime;
	float mBanFishingTime;
	FTimerHandle FishingTimerHandle;
	FTimerHandle FishingBanTimerHandle;
	FTimerHandle SetIdleStateTimerHandle;
	FTimerHandle PendingClientResponseTimerHandle;

	UPROPERTY(Replicated)
	bool mCanFishing;
	bool mFinishFishing;

	class UInventoryBase* InventoryBase;
	class UInventoryComponent* mInventoryComponent;
	class UCraftComponent* mCraftComponent;
	class UEquipmentComponent* mEquipmentComponent;
	class UPlaceholder* mPlaceholder;

	int32 mPrevTime;

	bool mCanEKeyPressed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	FVector MuzzleOffset;

	UPROPERTY(EditDefaultsOnly, Category = Projectile)
	TSubclassOf<class AProjectile_Bullet> ProjectileClass;

	FRotator mPlayerRotator;

	int32 mAmmoCount;

	class AEquipmentActor* mHat;
};
