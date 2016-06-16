#include <stdio.h>
#include <stdlib.h>

int main(){
	char letter[26];
	int k = 0;
	for (char i = 'a'; i < 'z'; ++i)
	{
		letter[k] = i;
		k++;
	}
	for (int i = 0; i < 26; ++i)
	{
		printf("%c ", letter[i]);
	}
	system("pause");
	return 0;
}
