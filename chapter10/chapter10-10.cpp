#include <stdio.h> 
#include <stdlib.h> 

void double2DArr(int arr[][5], int length){
	for (int i = 0; i < length; i++)
	{
		for (int k = 0; k < 5; k++)
		{
			arr[i][k] = arr[i][k] * arr[i][k];
		}
	}
	return;
}

void prt2dArr(int arr[][5],int length){
	for (int i = 0; i < length; ++i)
	{
		for (int k = 0; k < 5; ++k)
		{
			printf("arr[%d][%d] == %d ", i, k, arr[i][k]);
		}
		printf("\n");
	}
	return;
}


int main(){
	int arr[3][5] = {
		{ 1, 2, 3, 4, 5 },
		{ 2, 4, 6, 8, 10 },
		{ 3, 6, 9, 10, 12 }
	};
	printf("Before:\n");
	prt2dArr(arr, 3);
	printf("Doubled:\n");
	double2DArr(arr, 3);
	prt2dArr(arr, 3);
	system("pause");
	return 0;
}