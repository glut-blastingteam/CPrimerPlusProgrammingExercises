#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double power(double num, int exp){
	if (abs(num) < 0.0001){
		return 0.0;
	}
	else{
		double ans = 1.0;
		if (exp > 0){
			ans = num * power(num, --exp);
		}
		else if (exp < 0){
			ans = (1 / num) * power(num, ++exp);
		}
		else{
			ans = 1.0;
		}
		return ans;
	}
}

int main(){
	double num;
	int exp;
	while (scanf("%lf %d", &num, &exp) != EOF){
		printf("The power of the %.2lf is:%.2lf\n", num, power(num, exp));
		fflush(stdin);
	}
	system("pause");
	return 0;
}