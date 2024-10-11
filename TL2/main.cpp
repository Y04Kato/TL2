#include <cstdio>
#include <cstdlib>

int main(int argc, char* argv[]) {

	//argc‚Ì”‚¾‚¯ŒJ‚è•Ô‚·
	for (int i = 0; i < argc; i++) {
		printf(argv[i]);//•¶š—ñargc‚Ìi”Ô–Ú‚ğ•\¦
		printf("\n");//‰üs
	}

	system("pause");

	return 0;
}