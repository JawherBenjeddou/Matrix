#include<Matrix.h>



class Sandbox : public Matrix::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{
		
	}
};



Matrix::Application* Matrix::CreateApplication()
{
	return new Sandbox();
}