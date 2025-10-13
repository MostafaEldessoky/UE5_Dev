#pragma once

class CustomDebug
{
	CustomDebug() = default;
	CustomDebug(const CustomDebug& other) = delete;
	CustomDebug& operator=(const CustomDebug& other) = delete;
	CustomDebug(CustomDebug&& other) noexcept = delete;
	CustomDebug& operator=(CustomDebug&& other) noexcept = delete;
	~CustomDebug() = default;

	static CustomDebug* CustomDebugObj;

public:
	static CustomDebug* GetInstance();
	static void DestroyInstance();

	void AddDebugContent(AActor*, float dt = -1.f);
};
