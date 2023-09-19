// Fill out your copyright notice in the Description page of Project Settings.


#include "BallController.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

// Sets default values
ABallController::ABallController()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	SpringArm = CreateDefaultSubobject<USpringArmComponent>("SpringArm");
	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");


	RootComponent = Mesh;

	SpringArm->SetupAttachment(Mesh);

	Camera->SetupAttachment(SpringArm);


}





// Called when the game starts or when spawned
void ABallController::BeginPlay()
{
	Super::BeginPlay();
	
}



// Called to bind functionality to input
void ABallController::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Bind the "MoveForward" axis input event to the MoveForward method within the ABallController instance
	InputComponent->BindAxis("MoveForward", this, &ABallController::MoveForward);

	// Bind the "MoveRight" axis input event to the MoveRight method within the ABallController instance
	InputComponent->BindAxis("MoveRight", this, &ABallController::MoveRight);

	// Bind the "Jump" action input event to the Jump method within the ABallController instance
	// The IE_Pressed parameter specifies that the binding should only fire when the input event is first pressed down
	InputComponent->BindAction("Jump", IE_Pressed, this, &ABallController::Jump);


}

void ABallController::MoveRight(float value)
{

}

void ABallController::MoveForward(float value)
{
}

void ABallController::Jump()
{
}

