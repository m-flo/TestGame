// Fill out your copyright notice in the Description page of Project Settings.


#include "MyProjectItemBase.h"

// Sets default values
AMyProjectItemBase::AMyProjectItemBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	RootComponent = Mesh;
}

// Called when the game starts or when spawned
void AMyProjectItemBase::BeginPlay()
{
	Super::BeginPlay();
	
}


