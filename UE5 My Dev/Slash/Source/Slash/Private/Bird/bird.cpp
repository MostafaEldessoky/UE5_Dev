// Fill out your copyright notice in the Description page of Project Settings.


#include "Bird/bird.h"

#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "GameFramework/SpringArmComponent.h"
#include "Slash/CustomDebug.h"

// Sets default values
Abird::Abird()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	this->Capsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
	this->SetRootComponent(Capsule);
	this->Skeletal = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
	this->Skeletal->SetupAttachment(Capsule);
	this->SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	this->SpringArm->SetupAttachment(Capsule);
	this->Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	this->Camera->SetupAttachment(SpringArm);
	this->Movement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("Movement"));

	this->bUseControllerRotationPitch = true;
	this->bUseControllerRotationYaw = true;
}

// Called when the game starts or when spawned
void Abird::BeginPlay()
{
	Super::BeginPlay();
}

void Abird::AddDebugContent()
{
	CustomDebug::GetInstance()->AddDebugContent(this);
}

// Called every frame
void Abird::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void Abird::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &Abird::MoveForward);
	PlayerInputComponent->BindAxis(TEXT("MoveRight"), this, &Abird::MoveRight);
	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &Abird::Turn);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &Abird::LookUp);
}

void Abird::MoveForward(float Value)
{
	this->AddMovementInput(this->GetActorForwardVector(), Value);
}

void Abird::MoveRight(float Value)
{
	this->AddMovementInput(this->GetActorRightVector(), Value);
}

void Abird::Turn(float Value)
{
	this->AddControllerYawInput(Value);
}

void Abird::LookUp(float Value)
{
	this->AddControllerPitchInput(Value);
}
