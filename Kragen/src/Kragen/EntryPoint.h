#pragma once

#ifdef KR_PLATFORM_WINDOWS

extern Kragen::Application* Kragen::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Kragen::CreateApplication();
	app->Run();
	delete app;
}

#endif // KR_PLATFORM_WINDOWS
