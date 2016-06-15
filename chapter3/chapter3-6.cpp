#include <stdio.h>
#include <stdlib.h>

int main(){
	double quart;
	scanf("%lf", &quart); //try to use scanf("%f",&quart) if you has been float quart;
	printf("%e", (quart * 950) /3.0e-23);
	system("pause");
	return 0;
}