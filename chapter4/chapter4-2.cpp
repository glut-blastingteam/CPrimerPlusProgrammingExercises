#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char name[30];
	scanf("%s", name);
	printf("\"%s\"\n", name); //a
	printf("\"%20s\"\n", name); //b
	printf("\"%-10s\"\n", name); //c
	printf("\"%*s\"\n", strlen(name)+3,name); //d
	system("pause");
	return 0;
}