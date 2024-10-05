// Fill out your copyright notice in the Description page of Project Settings.


#include "RollaBallItemBase.h"
#include "Learning1/Game/RollaBallPlayer.h"

// Sets default values
ARollaBallItemBase::ARollaBallItemBase()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	// Create COmponents Before this step they won't exist on out Actor, they've only been defined.
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	RootComponent = Mesh;

	Mesh->OnComponentBeginOverlap.AddDynamic(this, &ARollaBallItemBase::OverlapBegin);
	RootComponent = Mesh;

}

// Called when the game starts or when spawned
void ARollaBallItemBase::BeginPlay()
{
	Super::BeginPlay();

}

void ARollaBallItemBase::OverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (Cast<ARollaBallPlayer>(OtherActor) != nullptr) 
	{
		Collected();
;	}
}

void ARollaBallItemBase::Collected_Implementation()
{
	// TODO - Do Game Mode Stuffs
}