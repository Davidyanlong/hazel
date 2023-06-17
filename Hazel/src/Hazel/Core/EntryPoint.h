#pragma once
#include "Hazel/Core/Core.h"

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
	Hazel::Log::init();
	HZ_CORE_WARN("Initiallized Log!");
	int a = 5;
	HZ_INFO("Hello! Var = {0}", a);

	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif
