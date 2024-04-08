// Fill out your copyright notice in the Description page of Project Settings.

#include "MovingPlatform.h"
#include <iostream>

// Sets default values
AMovingPlatform::AMovingPlatform()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();

	//MyVector.Y = MyX;
	MyX = MyVector.Y;

	SetActorLocation(MyVector);
}

// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector LocalVector = MyVector;
	// LocalVector have the values of MyVector
	// This line of code used for resetting the value of LocalVector each frame

	LocalVector.Z = LocalVector.Z + 1; 
	// Adding Z value to the LocalVector

	std::cout << LocalVector.Z;

	MyVector.Y = MyVector.Y + 1;
	// Adding Y value to the Y MyVector
	// This code makes the object move continously to the Y position

	SetActorLocation(LocalVector);
}
