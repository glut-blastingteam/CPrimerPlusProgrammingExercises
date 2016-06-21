#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

char * getString(char *str, int n){
	gets(str);
	int i = 0;
	char *nstr = (char *)malloc(1 * 1024);
	memset(nstr,'\0',1024);
	for (int i = 0; i < n; i++)
	{
		*(nstr + i) = *(str + i);
	}
	for (int k = n ; k < 1024; k++)
	{
		if (*(str + k) == ' ' || *(str + k) == '\t' || *(str + k) == '\n'){
			break;
		}
		else{
			*(nstr + k) = *(str + k);
		}
	}
	return nstr;
}

int main(){
	char string[1024] = "";
	int n = 5;
	puts(getString(string, n));
	system("pause");
	return 0;
}