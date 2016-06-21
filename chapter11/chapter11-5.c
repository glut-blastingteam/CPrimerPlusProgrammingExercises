#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_within(const char *str, char ch){
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] == ch){
			return 1;
		}
	}
	return 0; 
}

int main(){
	char *str[1024];
	while (gets(str) != NULL){
		char ch = getchar();
		if (is_within(str, ch) == 1)
			printf("Found\n");
		else
			printf("Not found\n");
		fflush(stdin);
		memset(str, '\0', 1024);
	}
	system("pause");
	return 0;
}