// Fill out your copyright notice in the Description page of Project Settings.


#include "DecoBase.h"
#include "Net/UnrealNetwork.h"
#include <Components/CapsuleComponent.h>
#include <Components/StaticMeshComponent.h>

// Sets default values
ADecoBase::ADecoBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	bReplicates = true;

	mBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	SetRootComponent(mBox);

	mStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	mStaticMesh->SetupAttachment(mBox);

	mOpacity = 0.f;
}

// Called when the game starts or when spawned
void ADecoBase::BeginPlay()
{
	Super::BeginPlay();
	for (int i = 0; i < mStaticMesh->GetMaterials().Num(); i++)
	{
		auto* Material = mStaticMesh->GetMaterial(i);
		UMaterialInstanceDynamic* DynamicMaterial = UMaterialInstanceDynamic::Create(Material, this);
		mStaticMesh->SetMaterial(i, DynamicMaterial);
	}
}

void ADecoBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ADecoBase, mItemID);
}

void ADecoBase::SetOpacity(float Opacity)
{
	mOpacity = Opacity;
	for (int i = 0; i < mStaticMesh->GetMaterials().Num(); i++)
	{
		if (auto* DynamicMaterial = Cast<UMaterialInstanceDynamic>(mStaticMesh->GetMaterial(i)))
		{
			DynamicMaterial->SetScalarParameterValue("Opacity", mOpacity);
		}
	}
}

void ADecoBase::SetColor(FVector4 Color)
{
	for (int i = 0; i < mStaticMesh->GetMaterials().Num(); i++)
	{
		if (auto* DynamicMaterial = Cast<UMaterialInstanceDynamic>(mStaticMesh->GetMaterial(i)))
		{
			DynamicMaterial->SetVectorParameterValue("Color", Color);
		}
	}
}

// Called every frame
void ADecoBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (mOpacity != 1.f)
	{
		TArray<AActor*> OverlappingActors;
		mBox->GetOverlappingActors(OverlappingActors);
		if (OverlappingActors.Num() > 0)
		{
			SetColor(DisableColor);
			mIsSetupEnabled = false;
		}
		else
		{
			SetColor(EnableColor);
			mIsSetupEnabled = true;
		}
	}
}

