// Fill out your copyright notice in the Description page of Project Settings.


#include "NPC/NPCBase.h"


UENUM(EBlueprintType)
enum class States : uint8
{
	Idle,
	Hungry,
	Curious,
	Occupied
};

// Sets default values
ANPCBase::ANPCBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;




}

// Called when the game starts or when spawned
void ANPCBase::BeginPlay()
{
	Super::BeginPlay();
	
}


// Called every frame
void ANPCBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!IsDomesticated) {
		
	}
}

void ANPCBase::FindFood()
{
}

void ANPCBase::IdleMove()
{
}
// Called to bind functionality to input
void ANPCBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

