#include <stdio.h>
#include <stdlib.h>

double min(double a, double b){
	return (a > b) ? b : a;
}

int main(){
	//driver 
	double m = 7.0;
	double n = 9.0;
	double k = min(m,n);
	printf("%f", k);
	system("pause");
	return 0;
}
