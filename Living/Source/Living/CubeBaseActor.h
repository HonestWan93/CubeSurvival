// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EngineMinimal.h"
#include "GameFramework/Actor.h"
#include "CubeBaseActor.generated.h"


//#define CUBEBASICSIZE 10
//
//enum class EBoxTypeEnum : uint8
//{
//	BoxTypeNone UMETA(DisplayName = "None"),
//	BoxTypeBasic UMETA(DisplayName = "Basic")
//};

UCLASS()
class LIVING_API ACubeBaseActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
		ACubeBaseActor();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//virtual void Create();
	//virtual void Delete();
	//virtual void PickUp();

private:
	//EBoxTypeEnum _boxType;

public:
	UPROPERTY(VisibleAnywhere)
	FString Id;

	UPROPERTY(EditAnywhere)
	float positionX;
	
	UPROPERTY(EditAnywhere)
	float positionY;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* pMeshBoxBody;
};