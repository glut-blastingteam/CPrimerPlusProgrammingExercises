#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]){
	char str[1024];
	gets(str);
	if (argv[1][1] == 'p'){
		puts(str);
	}
	else if (argv[1][1] == 'u'){
		for (int i = 0; i < strlen(str); i++)
		{
			str[i] = toupper(str[i]);
		}
		puts(str);
	}
	else if (argv[1][1] == 'l'){
		for (int i = 0; i < strlen(str); i++)
		{
			str[i] = tolower(str[i]);
		}
		puts(str);
	}
	system("pause");
	return 0;
}