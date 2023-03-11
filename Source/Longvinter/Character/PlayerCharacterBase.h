// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CharacterBase.h"
#include "PlayerCharacterBase.generated.h"

/**
 * 
 */
UCLASS()
class LONGVINTER_API APlayerCharacterBase : public ACharacterBase
{
	GENERATED_BODY()

public:
	APlayerCharacterBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(Server, Reliable)
	void ServerNormalAttackTest();

protected:
	bool mDeath;
	class ULvPlayerAnimInstance* mAnimInst;
};
