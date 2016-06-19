#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>

void readData(double (*num)[5], int length){
	for (int i = 0; i < length; i++)
	{
		printf("data set %d\n", i + 1);
		for (int k = 0; k < 5; k++)
		{
			printf("the %d number in data set %d:", k, i + 1);
			scanf("%lf", &num[i][k]);
			fflush(stdin);
		}
	}
	return;
}

double calEachAverage(double *arr, int length){
	double res = 0.0;
	for (int i = 0; i < length; i++)
	{
		res += arr[i];
	}
	return res;
}

double cal2DArrAverage(const double(*arr)[5], int length){
	double res = 0.0;
	for (int i = 0; i < length; i++)
	{
		for (int k = 0; k < 5; k++)
		{
			res += arr[i][k];
		}
	}
	return res;
}

double get2DArrMax(const double(*arr)[5], int length){
	double max = arr[0][0];
	for (int i = 0; i < length; i++)
	{
		for (int k = 0; k < 5; k++)
		{
			if (arr[i][k] > max|| abs(arr[i][k]-max) < 0.0001){
				max = arr[i][k];
			}
		}
	}
	return max;
}

int main(void) {

	//a.get input and save to array;
	double num[3][5] = { 0.0 };
	readData(num, 3);
	
	//b.calculate average of each data set;
	for (int t = 0; t < 3; t++)
		printf("\nAverage of each data set:%f\n", calEachAverage(num[t],5)/5);

	//c.calculate average of all data;
	printf("\nAverage of array:%f\n", cal2DArrAverage(num,3)/ 15);

	//d.get max number;
	printf("\nMax number of array:%f\n", get2DArrMax(num,3));

	//e. had been printed;
	system("pause");
	return 0;
}