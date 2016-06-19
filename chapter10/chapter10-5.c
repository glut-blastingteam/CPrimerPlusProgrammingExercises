#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>

double arrDiff(const double arr[], int length){
	double max, min;

	for (int i = 0; i < length; i++)
	{
		if (i == 0){
			min = max = arr[0];
		}
		if (arr[i] > max || abs(arr[i] - max) < 0.0001){
			max = arr[i];
		}
		else if (arr[i] < min || abs(arr[i] - min) < 0.00001){
			min = arr[i];
		}
	}

	return max - min;
}

int main(){
	double k = arrDiff((double[5]){ 5.0, -3.0, 1.0, 6.0, 9.0 }, 5);
	printf("The max - min of the array is:%f\n", k);
	system("pause");
	return 0;
}