#pragma once
#ifdef MX_PLATFORM_WINDOWS
	#ifdef MX_BUILD_DLL
		#define MATRIX_API __declspec(dllexport)
	#else
		#define MATRIX_API __declspec(dllimport)
	#endif
#else
	#error MATRIX only supports windows !
#endif