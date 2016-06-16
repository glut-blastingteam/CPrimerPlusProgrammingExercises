//there are some goto statements,you can easily replace it with others;
#include <stdio.h>
#include <stdlib.h>

void salary(float wkHour,const float RATE);

int main(){
AGAIN:
	printf("*****************************************************************\n");
	printf("Enter the number corresponding to the desired pay"
			" rate or action:\n");
	printf("1)$8.75/hr\t\t\t\t\t2)$9.33/hr\n3)$10.00/hr\t\t\t\t\t4)$11.20/hr\n5)quit\n");
	printf("*****************************************************************\n");
	int rank;
	scanf("%d",&rank);
	if(rank>=1 &&rank<=4){
		printf("Input Your work hours:\n");
		float wh;
		scanf("%f",&wh);
		switch(rank)
		{
			case 1:
				salary(wh,8.75);
				goto AGAIN;
			case 2:
				salary(wh,9.33);
				goto AGAIN;
			case 3:
				salary(wh,10.00);
				goto AGAIN;
			case 4:
				salary(wh,11.20);
				goto AGAIN;
			default:
				printf("Impossible!\n");
				goto AGAIN;
		}
	}else if(rank == 5){
		goto END;
	}else{
		printf("Invalid Number,please input again!\n");
		goto AGAIN;
	}
END:
	system("pause");
	return 0;
}

void salary(float wkHour,const float RATE){
	const float BASE_SALAR_RATE = RATE;
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
	printf("Salary:%.2f\nTax:%.2f\nNet Income:%.2f\n\n",
		salary, tax, salary-tax);
}