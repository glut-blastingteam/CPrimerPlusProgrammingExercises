#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int getPosition(char ch){
	if (isalpha(ch)){
		return ((int)ch - 96);
	}
	else{
		return -1;
	}
}

int main(){
	char c;
	while ((c=getchar())!= EOF){
		if (isalpha(c)){
			int k = getPosition(tolower(c));
			printf("The position of the %c is:%d\n", c, k);
			fflush(stdin);
		}
	}
	system("pause");
	return 0;
}