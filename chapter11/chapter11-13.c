#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
	int exp = atoi(argv[2]);
	double n = atof(argv[1]);

	double ans = 1.0;
	if (0==exp){
		printf("0\n");
	}
	else{
		for (int i = 0; i < exp; i++)
		{
			ans = n * ans;
		}
		printf("%d", exp);
		printf("%lf", ans);
		if (exp>0)
			printf("%lf\n", ans);
		else
			printf("%lf\n", 1.0 / ans);
	}
	system("pause");
	return 0;
}