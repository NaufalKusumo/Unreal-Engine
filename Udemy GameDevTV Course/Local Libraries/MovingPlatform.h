// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"

UCLASS()
class UNREALLEARNINGKIT_API AMovingPlatform : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMovingPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	int32 Myint = 99;

	UPROPERTY(EditAnywhere)
	float Myfloat = 10.5;

	UPROPERTY(EditAnywhere)
	FVector MyVector = FVector(-15590.0, -1480.0, 4056.0);

	UPROPERTY(EditAnywhere)
	float MyX = 0;
};
