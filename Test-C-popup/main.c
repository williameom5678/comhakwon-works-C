#include <windows.h>

static char szAppName[] = "Win32 Test";
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR szCmdLine, int iCmdShow) {
	MessageBox(NULL, "MessageBox 테스트", "MessageBox 테스트", MB_OK);

	return 0;
}