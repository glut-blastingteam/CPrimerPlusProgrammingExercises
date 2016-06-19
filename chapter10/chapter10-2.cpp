#include <stdio.h> 
#include <stdlib.h> 

void copy_arr(const double a[], double b[], int length){
	for (int i = 0; i < length; i++)
	{
		b[i] = a[i];
	}
	return;
}

void copy_ptr(const double *a, double *b, int length){
	for (int i = 0; i < length; i++)
	{
		*(b + i) = *(a + i);
	}
	return;
}

int main(){
	double source[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	double target1[5];
	double target2[5];
	copy_arr(source, target1, 5);
	copy_ptr(source, target2, 5);
	for (int i = 0; i < 5; i++)
	{
		printf("source:%f  target1:%f  target2:%f\n", source[i], target1[i], target2[i]);
	}
	system("pause");
	return 0;
}