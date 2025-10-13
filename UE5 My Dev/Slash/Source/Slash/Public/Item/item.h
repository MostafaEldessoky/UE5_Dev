// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "item.generated.h"


class USphereComponent;

UCLASS()
class SLASH_API Aitem : public AActor
{
	GENERATED_BODY()

public:
	Aitem();

	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void OnShereBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	                         int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
	void OnShereEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	                       int32 OtherBodyIndex);

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Base C++ Components")
	UStaticMeshComponent* Mesh;
	UPROPERTY(VisibleAnywhere, Category = "Base C++ Properties", BlueprintReadOnly)
	USphereComponent* Sphere;

	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
	void AddDebugContent();

	UPROPERTY(EditAnywhere, Category = "Base C++ Properties", BlueprintReadWrite)
	float XSpeed = 100.f;
	UPROPERTY(EditAnywhere, Category = "Base C++ Properties", BlueprintReadWrite)
	float YSpeed = 100.f;
	UPROPERTY(EditAnywhere, Category = "Base C++ Properties", BlueprintReadWrite)
	float ZSpeed = 100.f;
	UPROPERTY(EditAnywhere, Category = "Base C++ Properties", BlueprintReadWrite)
	bool XShift = true;
	UPROPERTY(EditAnywhere, Category = "Base C++ Properties", BlueprintReadWrite)
	bool YShift = true;
	UPROPERTY(EditAnywhere, Category = "Base C++ Properties", BlueprintReadWrite)
	bool ZShift = true;
	UPROPERTY(EditAnywhere, Category = "Base C++ Properties", BlueprintReadWrite)
	float Wx = 50.f;
	UPROPERTY(EditAnywhere, Category = "Base C++ Properties", BlueprintReadWrite)
	float Wy = 50.f;
	UPROPERTY(EditAnywhere, Category = "Base C++ Properties", BlueprintReadWrite)
	float Wz = 50.f;
	UPROPERTY(EditAnywhere, Category = "Base C++ Properties", BlueprintReadWrite)
	float PitchSpeed = 100.f;
	UPROPERTY(EditAnywhere, Category = "Base C++ Properties", BlueprintReadWrite)
	float YawSpeed = 100.f;
	UPROPERTY(EditAnywhere, Category = "Base C++ Properties", BlueprintReadWrite)
	float RollSpeed = 100.f;
};
