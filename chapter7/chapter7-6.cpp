#include <stdio.h>
#include <stdlib.h>

int main(){
	int eiCount = 0;
	char g;
	char last = 'm'; //except e
	while((g=getchar())!='#'){
		if(last == 'e' && g == 'i'){
			eiCount++;
			last = g;
		}else{
			last = g;
		}
	}
	printf("EI Count:%d\n", eiCount);
	system("pause");
	return 0;
}