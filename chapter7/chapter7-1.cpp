#include <stdio.h>
#include <stdlib.h>

int main(){
	//count
	int spaceCount,lineCount,charCount;
	spaceCount = lineCount = charCount =0;

	char g;
	while((g = getchar())!='#'){
		switch(g)
		{
			case ' ':
				spaceCount++;
				break;
			case '\n':
				lineCount++;
				break;
			default:
				charCount++;
				break;
		}
	}
	printf("Space Count:%d\nLine Count:%d\nCharacter Count:%d\n",
		spaceCount, lineCount,charCount);
	system("pause");
	return 0;
}