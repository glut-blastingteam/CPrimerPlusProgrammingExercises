#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * mystrncpy(char *s1, char *s2,int n){
	memset(s1, '\0', 1024);

	for (int k = 0; k < n; k++)
	{

		if (strlen(s2) < n)
			n = strlen(s2);
		s1[k] = s2[k];
	}
	return s1;
}

int main(){
	char *str1[1024],*str2[1024];
	while (gets(str2)!=NULL){
		int n;
		scanf("%d", &n);
		puts(mystrncpy(str1, str2, n));
		fflush(stdin);
		memset(str1, '\0', 1024);
		memset(str2, '\0', 1024);
	}
	system("pause");
	return 0;
}
