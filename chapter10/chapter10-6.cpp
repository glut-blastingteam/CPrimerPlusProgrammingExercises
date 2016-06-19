#include <stdio.h> 
#include <stdlib.h> 

void copy_ptr(double *a, double *b, int length){
	for (int i = 0; i < length; i++)
	{
		*(b + i) = *(a + i);
	}
	return;
}

void copy2DArr(double a[][5] , double target[][5], int length){
	for (int i = 0; i < length; i++)
	{
		copy_ptr(a[i], target[i],5);
	}
}

int main(){
	double arr1[3][5] = {
		{ 5.0, 3.0, 4.0, 1.0, 2.0 },
		{ -5.0, 11.0, 8.0, 7.0, 0.0 },
		{ -8.0, 56.0, 46.0, 17.0, -99.0 }
	};
	double arr2[3][5] = {0.0};
	copy2DArr(arr1, arr2, 3);
	for (int i = 0; i < 3; i++)
	{
		for (int k = 0; k < 5; k++)
		{
			printf("%f ", arr2[i][k]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}