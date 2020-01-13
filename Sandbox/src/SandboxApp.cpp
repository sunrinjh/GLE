#include <GLE.h>

class Sandbox : public GLE::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};

GLE::Application* GLE::CreateApplication()
{
	return new Sandbox();
}