#include <cstdio>
#include <cstdlib>
#include <cassert>
#include "TextureConverter.h"
#include <Windows.h>
enum Argument{
	kApplicationPath,
	kFilePath,
	
	NumArgument
};

int main(int argc,char* argv[]) {

	//引数の数足りなかったら止める
	assert(argc >= NumArgument);

	//COMの初期化
	HRESULT hr = CoInitializeEx(nullptr,COINIT_MULTITHREADED);
	assert(SUCCEEDED(hr));

	TextureConverter converter;
	converter.ConvertTextureWICToDDS(argv[kFilePath]);

	//COM終了
	CoUninitialize();

	system("pause");
	return 0;
}