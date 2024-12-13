#include "hzpch.h"
#include "Application.h"

#include "Hazel/Events/ApplicationEvent.h"
#include "Hazel/Log.h"

namespace Hazel {
	Application::Application()
	{
	}

	Application::~Application()
	{
	}

	void Application::Run()
	{
		WindowResizeEvent e(1280, 720);
		HZ_CORE_TRACE(e);
		HZ_TRACE("Hello World!");
		HZ_TRACE(e);
		HZ_INFO(e);
		HZ_WARN(e);
		HZ_ERROR(e);
		HZ_CRITICAL(e);

		while (true);
	}
}