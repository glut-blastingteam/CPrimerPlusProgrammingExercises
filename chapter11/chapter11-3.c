#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
char * getWord(char *str){
	char *nstr = (char *)malloc(1 * 20);
	memset(nstr, '\0', 20);
	int start = 0;
	while(*(str + start) == ' ' || *(str + start) == '\t' || *(str + start) == '\n')
		start++;
	int k = 0;
	while (*(str + start) != ' ' && *(str + start) != '\t' && *(str + start) != '\n'){
		*(nstr + k) = *(str + start);
		start++;
		k++;
	}

	return nstr;
}

int main(){
	char *str = "  Test string for chapter11-3";
	puts(getWord(str));
	system("pause");
	return 0;
}