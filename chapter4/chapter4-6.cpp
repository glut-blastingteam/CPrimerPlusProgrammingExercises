#include <stdio.h>
#include <stdlib.h>
#include <float.h>

int main(){
	double N = 1.0 / 3.0;
	float M = 1.0 / 3.0;
	printf("%.4f %.12f %.16f\n", N, N, N);
	printf("%.4f %.12f %.16f\n", M, M, M);
	printf("%d %d\n",FLT_DIG,DBL_DIG);
	system("pause");
	return 0;
}