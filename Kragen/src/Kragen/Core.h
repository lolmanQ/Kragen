#pragma once

#ifdef KR_PLATFORM_WINDOWS
	#ifdef KR_BUILD_DLL
		#define KRAGEN_API __declspec(dllexport)
	#else
		#define KRAGEN_API __declspec(dllimport)
	#endif
#else
	#error Kragen only supports Windows!
#endif
