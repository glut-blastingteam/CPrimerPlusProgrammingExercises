#include <stdio.h> 
#include <stdlib.h> 


void copy_ptr(double *a, double *b, int length){
	for (int i = 0; i < length; i++)
	{
		*(b + i) = *(a + i);
	}
	return;
}


int main(){
	double arr[7] = { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0 };
	double target[3];
	copy_ptr(arr + 2, target, 3);
	for (int i = 0; i < 3; i++)
	{
		printf("target[%d] == %f\n", i, target[i]);
	}
	system("pause");
	return 0;
}