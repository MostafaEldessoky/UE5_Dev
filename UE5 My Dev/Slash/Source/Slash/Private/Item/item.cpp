// Fill out your copyright notice in the Description page of Project Settings.


#include "Item/item.h"
#include "../../CustomDebug.h"
#include "Components/SphereComponent.h"
// Sets default values
Aitem::Aitem()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	this->Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	this->SetRootComponent(Mesh);
	this->Sphere = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
	this->Sphere->SetupAttachment(this->GetRootComponent());
}


// Called when the game starts or when spawned
void Aitem::BeginPlay()
{
	Super::BeginPlay();

	this->Sphere->OnComponentBeginOverlap.AddDynamic(this, &Aitem::OnShereBeginOverlap);
	this->Sphere->OnComponentEndOverlap.AddDynamic(this, &Aitem::OnShereEndOverlap);
}

void Aitem::AddDebugContent()
{
	CustomDebug::GetInstance()->AddDebugContent(this);
}


// Called every frame
void Aitem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	static int t = 0;

	this->AddActorWorldOffset(FVector((FMath::Sin(DeltaTime * Wx * t) + (int)XShift) * DeltaTime * XSpeed,
	                                  (FMath::Sin(DeltaTime * Wy * t) + (int)YShift) * DeltaTime * YSpeed,
	                                  (FMath::Sin(DeltaTime * Wz * t) + (int)ZShift) * DeltaTime * ZSpeed), true,
	                          nullptr,
	                          ETeleportType::None);

	this->AddActorWorldRotation(
		FRotator(DeltaTime * this->PitchSpeed, DeltaTime * this->YawSpeed, DeltaTime * this->RollSpeed), true, nullptr,
		ETeleportType::None);

	t++;
}

void Aitem::OnShereBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
                                int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Overlap"));
}

void Aitem::OnShereEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
                              int32 OtherBodyIndex)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("End Overlap"));
}
