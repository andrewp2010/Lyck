#pragma once

#include "Core.h"

namespace Lyck
{
	class LYCK_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in client
	Application* CreateApplication();
}
