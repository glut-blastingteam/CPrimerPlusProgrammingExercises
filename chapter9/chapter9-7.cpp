#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double power(double num, int exp){
	if (abs(num) < 0.0001){
		return 0.0;
	}
	else{
		if (exp > 0){
			double ans = 1.0;
			for (int i = 0; i < exp; i++){
				ans *= num;
			}
			return ans;
		}
		else if (exp < 0){
			double ans = 1.0;
			for (int k = 0; k < exp; k++){
				ans *= num;
			}
			return (1 / ans);
		}
		else{
			return 1.0;
		}
	}
}

int main(){
	double num;
	int exp;
	while (scanf("%lf %d", &num, &exp) != EOF){
		printf("The power of the %.2lf is:%.2lf\n", num, power( num, exp));
		fflush(stdin);
	}
	system("pause");
	return 0;
}