#pragma once

#ifdef LK_PLATFORM_WINDOWS

extern Lyck::Application* Lyck::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Lyck::CreateApplication();
	app->Run();
	delete app;
}

#endif