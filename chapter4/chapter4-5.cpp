#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char lname[30],fname[30];
	scanf("%s %s", lname, fname);
	printf("%5s%5s\n", lname, fname);
	printf("%5d%5d\n", strlen(lname), strlen(fname));
	system("pause");
	return 0;
}