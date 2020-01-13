#pragma once
#include "Core.h"

namespace GLE {

	class GLE_API Application
	{
	public:
		Application();
		virtual ~Application();
		
		void Run();
	};
	Application* CreateApplication(); //클라이언트에서 설정

}
