#include <stdio.h>
#include <stdlib.h>

int main(){
	int replaceCount = 0;
	char g;
	while((g = getchar())!='#'){
		switch(g)
		{
			case '.':
				putchar('!');
				replaceCount++;
				break;
			case '!':
				putchar('!');
				putchar('!');
				replaceCount +=2;
				break;
			default:
				break;
		}
	}
	printf("\nReplace Count:%d",replaceCount);
	system("pause");
	return 0;
}