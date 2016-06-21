#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * trim(char *s1){
	char res[1024];
	memset(res, '\0', 1024);

	for (int i = 0; i < strlen(s1); i++)
	{
		if(!isspace(s1[i]))
			res[strlen(res)] = s1[i];
	}
	return res;
}

int main(){
	char str[1024];
	while (gets(str) != NULL){
		char *p = trim(str);
		puts(p);
		fflush(stdin);
	}
	system("pause");
	return 0;
}
