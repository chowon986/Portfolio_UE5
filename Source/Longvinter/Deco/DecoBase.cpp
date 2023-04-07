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
		// ���ο� Material Instance�� �����մϴ�Material
		UMaterialInstanceDynamic* DynamicMaterial = UMaterialInstanceDynamic::Create(Material, this);

		// ���ο� Material Instance�� ������ �����մϴ�.
		DynamicMaterial->SetScalarParameterValue("Opacity", Opacity);

		// StaticMeshComponent�� ������ Material Instance�� �����մϴ�.
		mStaticMesh->SetMaterial(i, DynamicMaterial);
	}
}

// Called every frame
void ADecoBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

