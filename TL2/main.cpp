#include <cstdio>
#include <cstdlib>

int main(int argc, char* argv[]) {

	//argc�̐������J��Ԃ�
	for (int i = 0; i < argc; i++) {
		printf(argv[i]);//������argc��i�Ԗڂ�\��
		printf("\n");//���s
	}

	system("pause");

	return 0;
}