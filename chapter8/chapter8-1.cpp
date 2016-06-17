#include <stdio.h>
#include <stdlib.h>

int main(){
	int count = 0;
	char ch;
	while((ch = getchar()) != EOF){
		count++;
	}
	printf("Character Count:%d\n", count);
    system("pause");
    return 0;
}
