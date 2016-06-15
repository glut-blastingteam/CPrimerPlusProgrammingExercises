#include <stdio.h>

int main(){
	float cm;
	printf("Enter a height in centimeters:");
	scanf("%f", &cm);
	while(cm > 0){
		printf("%.1f cm = %.f feet, %.1f inches\n", cm, cm*0.033, cm / 2.54);
		printf("Enter a height in centimeters:(<=0 to quit)\n");
		scanf("%f", &cm);
	}
	return 0;
}