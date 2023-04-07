#pragma once
#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"
#include <memory> 
namespace Matrix
{
	class MATRIX_API Log
	{
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	public:
		static void init();


		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger()
		{
			return s_CoreLogger;
		}
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger()
		{
			return s_ClientLogger;
		}

	};
}



//MATRIX CORE LOG WARNING MACROS
#define MX_CORE_ERROR(...) Matrix::Log::GetCoreLogger()->error(__VA_ARGS__)
#define MX_CORE_WARN(...)  Matrix::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define MX_CORE_INFO(...)  Matrix::Log::GetCoreLogger()->info(__VA_ARGS__)
#define MX_CORE_TRACE(...) Matrix::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define MX_CORE_FATAL(...) Matrix::Log::GetCoreLogger()->FATAL(__VA_ARGS__)

//MATRIX CLIENT LOG WARNING MACROS
#define MX_CLIENT_ERROR(...) Matrix::Log::GetClientLogger()->error(__VA_ARGS__)
#define MX_CLIENT_WARN(...)  Matrix::Log::GetClientLogger()->warn(__VA_ARGS__)
#define MX_CLIENT_INFO(...)  Matrix::Log::GetClientLogger()->info(__VA_ARGS__)
#define MX_CLIENT_TRACE(...) Matrix::Log::GetClientLogger()->trace(__VA_ARGS__)
#define MX_CLIENT_FATAL(...) Matrix::Log::GetClientLogger()->FATAL(__VA_ARGS__)