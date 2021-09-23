#include "krpch.h"

#include "Log.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace Kragen {
	
	std::shared_ptr<spdlog::logger> Log::s_CoreLogger;
	std::shared_ptr<spdlog::logger> Log::s_Clientlogger;

	void Log::Init() 
	{
		spdlog::set_pattern("%^[%T] %n: %v%$");
		s_CoreLogger = spdlog::stdout_color_mt("KRAGEN");
		s_CoreLogger->set_level(spdlog::level::trace);

		s_Clientlogger = spdlog::stdout_color_mt("APP");
		s_Clientlogger->set_level(spdlog::level::trace);
	}
}