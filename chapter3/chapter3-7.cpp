#include <stdio.h>
#include <stdlib.h>

int main(){
	float inch = 2.54;
	float stature;
	scanf("%f", &stature);
	printf("%0.2fcm", stature * inch);
	system("pause");
	return 0;
}