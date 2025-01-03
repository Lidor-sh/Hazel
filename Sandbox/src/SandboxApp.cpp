#include "hzpch.h"
#include <Hazel.h>


class ExampleLayer : public Hazel::Layer {
public:
	ExampleLayer()
		: Layer("Example")
	{

	}

	void OnUpdate() override {
		if (Hazel::Input::IsKeyPressed(HZ_KEY_TAB))
			HZ_TRACE("Tab is pressed");
	}

	void OnEvent(Hazel::Event& event) override {
		// HZ_TRACE("{0}", event);
	}
};

class Sandbox : public Hazel::Application
{
public:
	Sandbox()
	{
		PushLayer(new ExampleLayer());
	}

	~Sandbox()
	{
	}
};

Hazel::Application* Hazel::CreateApplication()
{
	return new Sandbox();
}