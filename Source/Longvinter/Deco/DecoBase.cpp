// Fill out your copyright notice in the Description page of Project Settings.


#include "DecoBase.h"
#include <Components/CapsuleComponent.h>
#include <Components/StaticMeshComponent.h>

// Sets default values
ADecoBase::ADecoBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	bReplicates = true;

	mCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
	SetRootComponent(mCapsule);

	mStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	mStaticMesh->SetupAttachment(mCapsule);
}

// Called when the game starts or when spawned
void ADecoBase::BeginPlay()
{
	Super::BeginPlay();
}

void ADecoBase::SetOpacity(float Opacity)
{
	for (int i = 0; i < mStaticMesh->GetMaterials().Num(); i++)
	{
		auto* Material = mStaticMesh->GetMaterial(i);
		// 새로운 Material Instance를 생성합니다Material
		UMaterialInstanceDynamic* DynamicMaterial = UMaterialInstanceDynamic::Create(Material, this);

		// 새로운 Material Instance의 투명도를 설정합니다.
		DynamicMaterial->SetScalarParameterValue("Opacity", Opacity);

		// StaticMeshComponent에 생성한 Material Instance를 적용합니다.
		mStaticMesh->SetMaterial(i, DynamicMaterial);
	}
}

// Called every frame
void ADecoBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

