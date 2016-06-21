#include <stdio.h>
#include <stdlib.h>

void getString(char *str, int n){
	fgets(str,n+1,stdin);
	return;
}

int main(){
	char string[1024];
	int n = 5;
	getString(string,n);
	puts(string);
	system("pause");
	return 0;
}