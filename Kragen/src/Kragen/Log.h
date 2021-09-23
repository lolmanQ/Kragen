#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace Kragen {
	class KRAGEN_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_Clientlogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_Clientlogger;
	};
}

// Core log macros
#define KR_CORE_TRACE(...) ::Kragen::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define KR_CORE_INFO(...) ::Kragen::Log::GetCoreLogger()->info(__VA_ARGS__)
#define KR_CORE_WARN(...) ::Kragen::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define KR_CORE_ERROR(...) ::Kragen::Log::GetCoreLogger()->error(__VA_ARGS__)
#define KR_CORE_FATAL(...) ::Kragen::Log::GetCoreLogger()->critical(__VA_ARGS__)

// Client log macros
#define KR_TRACE(...) ::Kragen::Log::GetClientLogger()->trace(__VA_ARGS__)
#define KR_INFO(...) ::Kragen::Log::GetClientLogger()->info(__VA_ARGS__)
#define KR_WARN(...) ::Kragen::Log::GetClientLogger()->warn(__VA_ARGS__)
#define KR_ERROR(...) ::Kragen::Log::GetClientLogger()->error(__VA_ARGS__)
#define KR_FATAL(...) ::Kragen::Log::GetClientLogger()->critical(__VA_ARGS__)

