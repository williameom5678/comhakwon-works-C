#include <windows.h>

static char szAppName[] = "Win32 Test";
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR szCmdLine, int iCmdShow) {
	MessageBox(NULL, "MessageBox �׽�Ʈ", "MessageBox �׽�Ʈ", MB_OK);

	return 0;
}