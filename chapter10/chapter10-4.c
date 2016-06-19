#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>

int arrMaxIndex(const double arr[], int length){
	int index;

	double record;

	for (int i = 0; i < length; i++)
	{
		if (i == 0){
			index = 0;
			record = arr[i];
		}
		if (arr[i] > record || abs(arr[i]-record) < 0.0001){
			record = arr[i];
			index = i;
		}
	}

	return index;
}

int main(){
	int k = arrMaxIndex((double[5]){ 5.0, 3.0, 1.0, 6.0, 9.0 }, 5);
	printf("The index of max number of the array is:%d\n", k);
	system("pause");
	return 0;
}