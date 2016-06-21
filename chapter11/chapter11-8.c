#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char *s1){
	for (int i = strlen(s1)-1; i >=0; i--)
	{
		putchar(s1[i]);
	}
	printf("\n");
	return;
}

int main(){
	char *str[1024];
	while (gets(str) != NULL){
		reverse(str);
	}
	system("pause");
	return 0;
}
