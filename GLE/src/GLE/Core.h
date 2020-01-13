#pragma once

#ifdef GL_PLATFORM_WINDOWS
	#ifdef GL_BUILD_DLL
		#define GLE_API _declspec(dllexport)
	#else
		#define GLE_API _declspec(dllimport)
	#endif
#else
	#error Only For Windows
#endif
