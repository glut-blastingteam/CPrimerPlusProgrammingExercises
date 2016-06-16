#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char line[255] = {'\0'};
	char a;
	scanf("%c",&a);
	int i = 0;
	while(a!='\n'){
		line[i] = a;
		i++;
		scanf("%c",&a);
	}
	for (int k = strlen(line)-1; k >= 0; --k)
	{
		printf("%c", line[k]);
	}
	system("pause");
	return 0;
}