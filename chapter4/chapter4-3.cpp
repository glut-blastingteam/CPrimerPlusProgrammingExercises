#include <stdio.h>
#include <stdlib.h>

int main(){
	float num;
	scanf("%f", &num);
	printf("The input is %f or %e\n", num, num);//a
	printf("The input is %+.3f or %E\n", num, num);//b
	system("pause");
	return 0;
}