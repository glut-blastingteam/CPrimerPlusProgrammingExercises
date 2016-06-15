#include <stdio.h>
#include <stdlib.h>

float cube(float m);

int main(){
	float k;
	scanf("%f",&k);
	printf("%f", cube(k));
	system("pause");
	return 0;
}

float cube(float m){
	return m*m*m;
}