#include <stdio.h>
#include <stdlib.h>

float calculate(float m, float n){
	return ((m-n)/(m*n));
}

int main(){
	float a,b;
	while(scanf("%f %f", &a, &b)!= 0){
		printf("%f\n",calculate(a,b));
	}
	system("pause");
	return 0;
}