// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "MoahAnimation.generated.h"

class Amoah;
class UCharacterMovementComponent;

UCLASS()
class SLASH_API UMoahAnimation : public UAnimInstance
{
	GENERATED_BODY()

public:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

protected:
	UPROPERTY(BlueprintReadOnly, Category = "Base C++ Properties")
	Amoah* Moah;
	UPROPERTY(BlueprintReadOnly, Category = "Base C++ Properties")
	UCharacterMovementComponent* MovementComp;
	UPROPERTY(BlueprintReadOnly, Category = "Base C++ Properties")
	float GroundSpeed;
	UPROPERTY(BlueprintReadOnly, Category = "Base C++ Properties")
	bool IsFalling;
};
