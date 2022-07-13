#pragma once

#ifdef LK_PLATFORM_WINDOWS
	#ifdef LK_BUILD_DLL
		#define LYCK_API _declspec(dllexport)
	#else
		#define LYCK_API _declspec(dllimport)
	#endif
#else
	#error Lyck only supports Windows!
#endif