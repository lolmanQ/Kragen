#include "krpch.h"

#include "Application.h"

#include "Kragen/Events/ApplicationEvent.h"
#include "Kragen/Log.h"

#include <GLFW/glfw3.h>

namespace Kragen {
	Application::Application()
	{
		m_Window = std::unique_ptr<Window>(Window::Create());
	}
	Application::~Application()
	{
	}
	void Application::Run()
	{
		while(m_Running)
		{
			glClearColor(0.4921875f, 0.54296875f, 0.6171875f, 1);
			glClear(GL_COLOR_BUFFER_BIT);
			m_Window->OnUpdate();
		}
	}
}
