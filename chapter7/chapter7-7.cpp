#include <stdio.h>
#include <stdlib.h>
#define BASE_SALAR_RATE 10.00

int main(){
	float wkHour;
	scanf("%f",&wkHour);
	float salary,tax;
	
	if(wkHour > 40){
		salary = ((wkHour-40) * 1.5) * BASE_SALAR_RATE;
	}else{
		salary =  wkHour * BASE_SALAR_RATE;
	}

	if(salary < 300){
		tax = salary * 0.15;
	}else{
		if((salary-300) > 150){
			tax = salary * 0.15 + 150 * 0.2 + (salary-450) * 0.25;
		}else{
			tax = salary * 0.15 + (salary-300) * 0.2;
		}
	}
	printf("Salary:%.2f\nTax:%.2f\nNet Income:%.2f\n",
		salary, tax, salary-tax);
	system("pause");
	return 0;
}