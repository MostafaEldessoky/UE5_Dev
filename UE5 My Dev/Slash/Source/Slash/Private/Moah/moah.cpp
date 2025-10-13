// Fill out your copyright notice in the Description page of Project Settings.


#include "Moah/moah.h"

#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Slash/CustomDebug.h"

// Sets default values
Amoah::Amoah()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	this->SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	this->SpringArm->SetupAttachment(this->GetRootComponent());
	this->Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	this->Camera->SetupAttachment(this->SpringArm);

	this->bUseControllerRotationPitch = false;
	this->bUseControllerRotationYaw = false;
	this->bUseControllerRotationRoll = false;
	this->SpringArm->bUsePawnControlRotation = true;
	this->GetCharacterMovement()->bOrientRotationToMovement = true;
}

// Called when the game starts or when spawned
void Amoah::BeginPlay()
{
	Super::BeginPlay();
}

void Amoah::AddDebugContent()
{
	CustomDebug::GetInstance()->AddDebugContent(this);
}

// Called every frame
void Amoah::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void Amoah::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &Amoah::MoveForward);
	PlayerInputComponent->BindAxis(TEXT("MoveRight"), this, &Amoah::MoveRight);
	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &Amoah::Turn);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &Amoah::LookUp);
	PlayerInputComponent->BindAction(TEXT("Jump"), IE_Pressed, this, &ACharacter::Jump);
}

void Amoah::MoveForward(float Value)
{
	this->AddMovementInput(FRotationMatrix(FRotator(0.f, this->GetControlRotation().Yaw, 0.f)).GetUnitAxis(EAxis::X),
	                       Value);
}

void Amoah::MoveRight(float Value)
{
	this->AddMovementInput(FRotationMatrix(FRotator(0.f, this->GetControlRotation().Yaw, 0.f)).GetUnitAxis(EAxis::Y),
	                       Value);
}


void Amoah::Turn(float Value)
{
	this->AddControllerYawInput(Value);
}

void Amoah::LookUp(float Value)
{
	this->AddControllerPitchInput(Value);
}
