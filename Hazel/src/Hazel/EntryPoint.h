#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();
//extern ����ȫ�ֱ��� ������ȫ�ֳ���ӵ���ⲿ����
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