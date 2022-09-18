#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main() 
{
	WNDCLASSA wcl;
		memset(&wcl, 0, sizeof(WNDCLASSA) );
		wcl.lpszClassName = "my Window";
		wcl.lpfnWndProc = DefWindowProcA;


	RegisterClassA(&wcl);

	HWND hwnd;
	hwnd = CreateWindow("my Window", "Window Name", WS_OVERLAPPEDWINDOW, 10, 10, 640, 480, NULL, NULL, NULL, NULL);

	ShowWindow(hwnd, SW_SHOWNORMAL);
	while (1)
	{

	}

	return 0;

}
