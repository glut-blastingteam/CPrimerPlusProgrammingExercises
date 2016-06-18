#include <stdio.h>
#include <stdlib.h>

void larger_of(double * a, double * b);

int main(){
	double m = 9.0;
	double n = 73.0;
	larger_of(&m, &n);
	printf("now m = %.2f, n= %.2f\n", m, n);
	system("pause");
	return 0;
}


void larger_of(double * a, double * b){
	*a = *b = (*a > *b) ? *a : *b;
}