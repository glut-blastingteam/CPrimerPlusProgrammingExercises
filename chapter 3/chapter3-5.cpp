#include <stdio.h>
#include <stdlib.h>

int main(){
	int age;
	scanf("%d", &age);
	double seconds = age * 3.156e+7;
	printf("%e", seconds);
	system("pause");
	return 0;
}