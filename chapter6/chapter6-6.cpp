#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char word[255];
	scanf("%s",word);
	for (int i = 0; i <= strlen(word); ++i)
	{
		printf("%c", word[strlen(word)-i-1]);
	}
	system("pause");
	return 0;
}