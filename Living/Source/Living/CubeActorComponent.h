// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EngineMinimal.h"
#include "Components/ActorComponent.h"
#include "CubeActorComponent.generated.h"

enum class EBoxTypeEnum : uint8
{
	BoxTypeNone UMETA(DisplayName = "None"),
	BoxTypeBasic UMETA(DisplayName = "Basic")
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class LIVING_API UCubeActorComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCubeActorComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
	virtual void Create();
	virtual void Delete();
	virtual void PickUp();
		
private:
	EBoxTypeEnum _boxType;

public:
	UPROPERTY(VisibleAnywhere)
	FString id;


	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* pMeshBoxBody;
};
