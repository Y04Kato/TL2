#include <cstdio>
#include <cstdlib>

int main(int argc, char* argv[]) {

	//argcの数だけ繰り返す
	for (int i = 0; i < argc; i++) {
		printf(argv[i]);//文字列argcのi番目を表示
		printf("\n");//改行
	}

	system("pause");

	return 0;
}