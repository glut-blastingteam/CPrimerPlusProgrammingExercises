#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int num[8];
	for (int i = 0; i < 8; ++i)
	{
		num[i] = pow(2,i);
	}
	int k = 0;
	do{
		printf("%d ", num[k]);
		k++;
	}while(k<=7);
	system("pause");
	return 0;
}