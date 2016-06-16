#include <stdio.h>
#include <stdlib.h>

int main(){
	int replaceCount = 0;
	char g;
	while((g = getchar())!='#'){
		if(g == '.'){
			putchar('!');
			replaceCount++;
			continue;
		}else if(g == '!'){
			putchar('!');
			putchar('!');
			replaceCount +=2;
			continue;
		}else{
			continue;
		}
	}
	printf("\nReplace Count:%d",replaceCount);
	system("pause");
	return 0;
}