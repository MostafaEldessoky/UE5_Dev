// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "bird.generated.h"

class UCapsuleComponent;
class USpringArmComponent;
class UCameraComponent;
class USkeletalMeshComponent;
class UFloatingPawnMovement;
class UInputComponent;

UCLASS()
class SLASH_API Abird : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	Abird();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Base C++ Components")
	USkeletalMeshComponent* Skeletal;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Base C++ Components")
	UCapsuleComponent* Capsule;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Base C++ Components")
	USpringArmComponent* SpringArm;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Base C++ Components")
	UCameraComponent* Camera;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Base C++ Components")
	UFloatingPawnMovement* Movement;

	UFUNCTION(BlueprintCallable)
	void AddDebugContent();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

	void MoveForward(float Value);
	void MoveRight(float Value);
	void Turn(float Value);
	void LookUp(float Value);
};
