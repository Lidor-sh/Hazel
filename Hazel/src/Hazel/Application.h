#pragma once

#include "Hazel/Events/ApplicationEvent.h"
#include "Core.h"
#include "Events/Event.h"
#include "Window.h"

namespace Hazel {

	class HAZEL_API Application
	{
	private:
		std::unique_ptr<Window> m_Window;
		bool m_Running = true;
	private:
		bool OnWindowClose(WindowCloseEvent& e);
	public:
		Application();
		virtual ~Application();

		void Run();

		void OnEvent(Event& e);
	};

	// To be defined in client
	Application* CreateApplication();
}

