#pragma once

#ifdef KR_PLATFORM_WINDOWS

extern Kragen::Application* Kragen::CreateApplication();

int main(int argc, char** argv)
{
	Kragen::Log::Init();

	KR_CORE_TRACE("Core logger loaded");
	KR_INFO("App ready");

	auto app = Kragen::CreateApplication();
	app->Run();
	delete app;
}

#endif // KR_PLATFORM_WINDOWS
