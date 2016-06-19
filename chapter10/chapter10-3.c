#include <stdio.h> 
#include <stdlib.h> 

int arrMax(const int arr[], int length){
	int ret;

	for (int i = 0; i < length; i++)
	{
		if (i == 0)
			ret = arr[i];
		if (arr[i] >= ret){
			ret = arr[i];
		}
	}
	
	return ret;
}

int main(){
	int k = arrMax((int[5]){5,3,1,6,9},5); 
	printf("Max number of the array is:%d\n", k);
	system("pause");
	return 0;
}