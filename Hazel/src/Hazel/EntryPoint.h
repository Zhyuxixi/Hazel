#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();
//extern 修饰全局变量 表明该全局常量拥有外部链接
int main(int argc, char** argv)
{
	Hazel::Log::Init();
	HZ_CORE_ERROR("Initialized Log!");
	int a = 5;
	HZ_INFO("Hello! Var={0}", a);
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif