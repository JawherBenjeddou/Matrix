#pragma once
#ifdef MX_PLATFORM_WINDOWS
extern Matrix::Application* Matrix::CreateApplication();
int main(int argc,char **argv)
{
	Matrix::Log::init();
	MX_CORE_INFO("INITIALIZED LOG !");
	auto app = Matrix::CreateApplication();
	app->Run();
	delete app;
}
#endif 
// MX_PLATFORM_WINDOWS
