#include <Lyck.h>

class Sandbox : public Lyck::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Lyck::Application* Lyck::CreateApplication()
{
	return new Sandbox();
}