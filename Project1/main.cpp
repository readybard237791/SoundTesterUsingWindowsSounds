#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    MessageBoxA(NULL, "Exception access violation at 0xc382839a", "Error", MB_OK | MB_ICONERROR);
    return 0;
}