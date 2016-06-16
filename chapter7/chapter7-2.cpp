#include <stdio.h>
#include <stdlib.h>

int main(){
	const int period = 8;
	int T = 1; 
	char g;
	while((g = getchar())!='#'){
		printf("%c-%d  ", g, g);
		if(T >= period){
			printf("\n");
			T = 1;
		}else{
			T++;
		}
	}
	system("pause");
	return 0;
}