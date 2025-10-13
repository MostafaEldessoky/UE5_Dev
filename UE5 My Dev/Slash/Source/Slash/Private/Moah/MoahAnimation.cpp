// Fill out your copyright notice in the Description page of Project Settings.


#include "Moah/MoahAnimation.h"

#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Moah/moah.h"

void UMoahAnimation::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	this->Moah = Cast<Amoah>(this->TryGetPawnOwner());
	if (this->Moah != nullptr)
	{
		this->MovementComp = this->Moah->GetCharacterMovement();
	}
}

void UMoahAnimation::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	if (this->MovementComp != nullptr)
	{
		this->GroundSpeed = UKismetMathLibrary::VSizeXY(this->MovementComp->Velocity);
		this->IsFalling = this->MovementComp->IsFalling();
	}
}
