#include <stdio.h>
#include <stdlib.h>

int main(){
	float a,b;
	while(scanf("%f %f", &a, &b)!= 0){
		printf("%f\n", (a-b)/(a*b));
	}
	system("pause");
	return 0;
}