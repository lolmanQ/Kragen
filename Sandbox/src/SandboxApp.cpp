#include <Kragen.h>

class Sandbox : public Kragen::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}

};

Kragen::Application* Kragen::CreateApplication()
{
	return new Sandbox();
}