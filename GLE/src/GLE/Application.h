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
	Application* CreateApplication(); //Ŭ���̾�Ʈ���� ����

}
