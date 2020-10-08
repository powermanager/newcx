#include "cx_utils.h"

#ifndef LINUX
#include <Windows.h>
#endif

void		SetCursorPosition( int x, int y ) {

#ifdef LINUX
	/* 

	!!! ��������� ��� ��� ������������ ��������� ������� � ��������� ������� !!!

	*/
#else // WINDOWS
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	COORD pos = { x, y };
	SetConsoleCursorPosition( hConsole, pos );
#endif

}