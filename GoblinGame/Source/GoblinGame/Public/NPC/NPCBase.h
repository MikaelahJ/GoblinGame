// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "NPCBase.generated.h"



UCLASS()
class GOBLINGAME_API ANPCBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ANPCBase();


	/*UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AI")
	class UPawnSensingComponent* pawnSenser;*/

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "LivingConditions")
	bool IsDomesticated = false;
	bool IsHungry = false;
	bool HasGoal = false;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void FindFood();
	void IdleMove();


public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
