#pragma once

#ifdef GL_PLATFORM_WINDOWS

extern GLE::Application* GLE::CreateApplication();
int main(int argc, char** argv)
{
	printf("GLE Engine EntryPoint Working");
	auto app = GLE::CreateApplication();
	app->Run();
	delete app;
}
#endif