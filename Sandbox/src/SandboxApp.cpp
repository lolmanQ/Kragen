#include <Kragen.h>

class ExampleLayer : public Kragen::Layer
{
public:
	ExampleLayer()
		: Layer("Example")
	{
	}

	void OnUpdate() override
	{
		
	}

	void OnEvent(Kragen::Event& event) override
	{
		
	}

};

class Sandbox : public Kragen::Application
{
public:
	Sandbox()
	{
		PushLayer(new ExampleLayer());
	}
	~Sandbox()
	{

	}

};

Kragen::Application* Kragen::CreateApplication()
{
	return new Sandbox();
}