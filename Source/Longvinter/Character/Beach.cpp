// Fill out your copyright notice in the Description page of Project Settings.


#include "Beach.h"

// Sets default values
ABeach::ABeach()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABeach::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABeach::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

