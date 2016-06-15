#include <stdio.h>

void Temperature(double m);

int main(){
	double t;
	int res = scanf("%lf", &t);
	while (res == 1){
		Temperature(t);
		res = scanf("%lf", &t);
	}
	return 0;
}

void Temperature(double m){
	const double a = 1.8;
	const double b = 32.0;
	const double c = 273.16;

	double celsius = a * m + b;
	double kelvin = celsius + c;
	printf("Fahrenheit temperature:%.2f\n"
		   "Celsius temperature:%.2f\n"
		   "Kelvin temperature:%.2f\n", m, celsius, kelvin);
}