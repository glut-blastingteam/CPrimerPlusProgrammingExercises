#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * mystrchr(const char *str, char ch){
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] == ch){
			return &str[i];
		}
	}
	return ' '; //dangerous
}

int main(){
	char *str[1024];
	while (gets(str)!=NULL){
		char ch = getchar();
		if (mystrchr(str, ch)!= ' ')
			printf("Found\n");
		else
			printf("Not found\n");
		fflush(stdin);
		memset(str, '\0', 1024);
	}
	system("pause");
	return 0;
}