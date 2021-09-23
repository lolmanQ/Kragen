#pragma once

#include "Core.h"

namespace Kragen {
	class KRAGEN_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}

