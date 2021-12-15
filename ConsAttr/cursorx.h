#pragma once

#include <Windows.h>

void set_color(WORD fc, WORD bc)
{
	HANDLE hwnd = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hwnd, fc + (bc << 4));
}

void set_xy(SHORT x, SHORT y)
{
	HANDLE hwnd = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hwnd, { x, y });
}