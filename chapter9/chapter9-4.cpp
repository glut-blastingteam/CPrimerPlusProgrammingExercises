#include <stdio.h>

double harmonicMean(double a, double b){
	return 1 / ((1 / a + 1 / b) / 2);
}

int main(){
	//driver
	double hm = harmonicMean(5.65, 6.65);
	return 0;
}
