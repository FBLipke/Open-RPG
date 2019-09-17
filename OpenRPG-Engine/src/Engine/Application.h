#include "Core.h"
#pragma once

namespace Engine
{
	class DLLEXPORT Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	private:

	};

	Application* CreateApplication();
}
