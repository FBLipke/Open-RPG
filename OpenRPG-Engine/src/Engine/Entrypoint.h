#pragma once
#include "Application.h"

extern Engine::Application* Engine::CreateApplication();

int main(int argc, char** argv)
{
	printf("OpenRPG-Engine\n");

	auto app = Engine::CreateApplication();
	app->Run();

	delete app;

	return 0;
}