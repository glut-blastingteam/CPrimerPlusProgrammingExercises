#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void transform(double source[], double target[], int size, double(*func)()){
	for (int i = 0; i < size; i++)
		target[i] = func(source[i]);
}

double mysqrt(double num){
	return num*num;
}

double mycube(double num){
	return num*num*num;
}

void printArr(double arr[],int length){
	for (int i = 0; i < length; i++){
		printf("%f  ", arr[i]);
	}
	printf("\n");
}

int main(){
	double source[4] = { 1.0, 2.0, 3.0, 4.0 };
	double target[4];

	transform(source, target, 4, sin);
	printArr(target, 4);
	transform(source, target, 4, cos);
	printArr(target, 4);
	transform(source, target, 4, mysqrt);
	printArr(target, 4);
	transform(source, target, 4, mycube);
	printArr(target, 4);
	system("pause");
	return 0;
}