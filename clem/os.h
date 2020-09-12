// Copyright 2020 SMS
// License(Apache-2.0)
// ����ʱϵͳ��Ϣ

#ifndef CLEM_OS_H_
#define CLEM_OS_H_

// �������ϵͳ��, �����жϲ���ϵͳ����
#ifdef _WIN32
	#define OS_WIN // Windows
	#ifdef _WIN64
		#define OS_WIN_64
	#else
		#define OS_WIN_32
	#endif
#else
	#if defined(__unix__) || defined(unix)
		#define OS_UNIX
	#endif

	#define OS_LINUX // Linux
#endif

#ifdef OS_WIN
	#include <windows.h>
	#define hStdOut GetStdHandle(STD_OUTPUT_HANDLE)
#endif

#endif // CLEM_OS_H_
