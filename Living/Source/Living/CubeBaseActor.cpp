// Fill out your copyright notice in the Description page of Project Settings.

#include "CubeBaseActor.h"


// Sets default values
ACubeBaseActor::ACubeBaseActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACubeBaseActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACubeBaseActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

