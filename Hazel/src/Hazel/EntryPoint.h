#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();
//extern ����ȫ�ֱ��� ������ȫ�ֳ���ӵ���ⲿ����
int main(int argc, char** argv)
{
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif