#pragma once
#include"Core.h"
namespace Matrix {
	class MATRIX_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};


	//DEFINED IN CLIENT (SandboxApp)
	Application* CreateApplication();
}
