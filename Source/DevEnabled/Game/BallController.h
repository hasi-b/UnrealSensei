// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BallController.generated.h"

class UCameraComponent;
class USpringArmComponent;


UCLASS()
class DEVENABLED_API ABallController : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABallController();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	UPROPERTY(VisibleAnywhere, BluePrintReadOnly, Category = "Components")
		UStaticMeshComponent* Mesh;
	UPROPERTY(VisibleAnywhere, BluePrintReadOnly, Category = "Components")
		USpringArmComponent* SpringArm;

	UPROPERTY(VisibleAnywhere, BluePrintReadOnly, Category = "Components")
		UCameraComponent* Camera;


	//Variables
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float MoveForce = 500.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float JumpImpulse = 1000.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 MaxJumpCount = 1;


	

public:	
	

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:

	//Functions

	void MoveRight(float value);
	void MoveForward(float value);
	void Jump();


	int32 JumpCount = 0;

};
