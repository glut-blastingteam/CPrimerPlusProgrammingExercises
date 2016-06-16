#include <stdio.h>
#include <stdlib.h>

int main(){
	double num[8];
	double num2[8];
	for (int i = 0; i < 8; ++i)
	{
		scanf("%lf",&num[i]);
	}
	for (int k = 0; k < 8; ++k)
	{
		double sum = 0;
		for (int p = 0; p <= k; ++p)
		{
			sum += num[p];
		}
		num2[k] = sum;
	}
	for (int m = 0; m < 8; ++m)
	{
		printf("%f ", num2[m]);
	}
	system("pause");
	return 0;
}