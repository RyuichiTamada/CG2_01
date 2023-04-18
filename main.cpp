#include<Windows.h>

//Windoesアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	//ウィンドウへの文字出力
	OutputDebugStringA("Hello,DirectX!\n");

	return 0;
}