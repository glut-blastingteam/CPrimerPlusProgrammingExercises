/*stupid calculator*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

void add(float a, float b){
	printf("%.2f + %.2f = %.2f\n", a, b, a + b);
}

void subtract(float a, float b){
	printf("%.2f - %.2f = %.2f\n", a, b, a - b);
}

void multiply(float a, float b){
	printf("%.2f x %.2f = %.2f\n", a, b, a * b);
}

void divide(float a, float b){
	printf("%.2f / %.2f = %.2f\n", a, b, a / b);
}

void getNum(void (*func)(float a, float b),bool divideFlag){
	float fnum, snum;
	printf("Enter first number:");
	while (scanf("%f", &fnum) != 1){
		printf("Please enter a number, such as 2.5 -1.78E8, or 3:");
		scanf("%f", &fnum);
		fflush(stdin);
	}
	printf("Enter second number:");
	while (scanf("%f", &snum) != 1){
		printf("Please enter a number, such as 2.5 -1.78E8, or 3:");
		scanf("%f", &snum);
		fflush(stdin);
	}
	if (divideFlag == 1){
		while (snum <= 0.00001){
			printf("Enter a number more than 0:");
			scanf("%f", &snum);
		}
	}
	func(fnum, snum);
}

int main(){
	//menu
	printf("Enter the operation of your choice:\n");
	printf("a.add\t\ts.subtract\nm.multiply\td.divide\nq.quit\n");
	//choice
AGAIN:
	fflush(stdin);
	char choice = getchar();
	
	switch (choice)
	{
		case 'a':
			getNum(add,0);
			goto AGAIN;
		case 's':
			getNum(subtract,0);
			goto AGAIN;
		case 'm':
			getNum(multiply,0);
			goto AGAIN;
		case 'd':
			getNum(divide,1);
			goto AGAIN;
		case 'q':
			break;
		default:
			printf("Try to select a correct selection!\n");
			goto AGAIN;
	}
	printf("Bye.\n");
	system("pause");
	return 0;
}