#include <stdio.h>
#include <stdlib.h>

int main(){
	const float mileCV = 1.609;
	const float gallonCV = 3.785;

	float mile,gallon;
	scanf("%f %f", &mile, &gallon); 
	printf("per 100km: %.1f L.", ((mile * mileCV)/(gallon * gallonCV))*100 ); 
	system("pause");
	return 0;
}