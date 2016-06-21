#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
	for (int i = argc-1; i > 0; i--)
	{
		printf("%s ", argv[i]);
	}
	system("pause");
	return 0;
}