#include "CustomDebug.h"

CustomDebug* CustomDebug::CustomDebugObj = nullptr;

CustomDebug* CustomDebug::GetInstance()
{
	if (CustomDebugObj == nullptr)
	{
		CustomDebugObj = new CustomDebug();
		return CustomDebugObj;
	}
	return CustomDebugObj;
}

void CustomDebug::DestroyInstance()
{
	if (CustomDebugObj != nullptr)
	{
		delete CustomDebugObj;
		CustomDebugObj = nullptr;
	}
}

void CustomDebug::AddDebugContent(AActor* me,float dt )
{
	auto world = me->GetWorld();
	auto location = me->GetActorLocation();
	auto end_location = location + me->GetActorForwardVector() * 100;
	auto above_location = location + me->GetActorUpVector() * 100;
	auto engine = GEngine;

	DrawDebugSphere(world, location, 30, 16, FColor::Red,
	                false, 0, 0, 3);

	DrawDebugLine(world, location, end_location,
	              FColor::Green, false, 0, 0, 3);

	DrawDebugLine(world, location, above_location,
				  FColor::Green, false, 0, 0, 3);

	DrawDebugPoint(world, end_location, 30, FColor::Blue, false, 0, 0);

	DrawDebugPoint(world, above_location, 30, FColor::Blue, false, 0, 0);

	DrawDebugString(world, above_location,
	                FString::Printf(TEXT("%s"), *(me->GetName())),
	                nullptr, FColor::Yellow, 0, true, 2);

	UE_LOG(LogTemp, Warning, TEXT("%s called"), *(me->GetName()))

	engine->AddOnScreenDebugMessage(1, 0.f, FColor::Red,FString::Printf(TEXT("%f"),dt) );
}
