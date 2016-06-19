#include <stdio.h> 
#include <stdlib.h> 

void arrSum(const int a[], const int b[], int c[], int length){
	for (int i = 0; i < length; i++)
	{
		c[i] = a[i] + b[i];
	}
	return;
}

int main(){
	int a[5] = { 1, 2, 3, 4, 5 };
	int b[5] = { 1, 2, 3, 4, 5 };
	int c[5];
	arrSum(a, b, c, 5);
	for (size_t i = 0; i < 5; i++)
	{
		printf("%d ", c[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}