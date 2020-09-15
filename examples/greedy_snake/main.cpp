// Copyright 2020 SMS
// License(Apache-2.0)
// ̰����

#include <clem/clem.hpp>
#include "snake.hpp"
#include <time.h>

#ifdef OS_WIN
#include <windows.h>
#define sleep(ms) Sleep(ms)
#else
#include <unistd.h>
#define sleep(ms) usleep(ms * 1000)
#endif

const float snack_speed = 0.2;

int main()
{
	srand(time(nullptr));                                // ��ʼ�������������
	Terminal::Cursor::hide();                            // ���ع��
	auto          winSize = Terminal::getWindowSize();   // ��ȡ�ն˴��ڴ�С
	Scene         scene;                                 // ��������
	while(true)
	{
		scene.update();
		sleep(50);
	}

	(void)getchar();
	return 0;
}
