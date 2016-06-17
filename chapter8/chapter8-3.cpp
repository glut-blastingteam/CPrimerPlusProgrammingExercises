#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	char ch;
	int lowerCount = 0;
	int upperCount = 0;
	while((ch=getchar()) != EOF){
		if(islower(ch))
			lowerCount++;
		else if(isupper(ch))
			upperCount++;
	}
	printf("Lower Count:%d\nUpperCount:%d\n", lowerCount, upperCount);
    system("pause");
    return 0;
}
