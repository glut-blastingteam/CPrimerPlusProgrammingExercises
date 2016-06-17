#include <stdio.h>
#include <stdlib.h>
#define CLS1_BASE 17850
#define CLS2_BASE 23900
#define CLS3_BASE 29750
#define CLS4_BASE 14875
void prtTax(int tax_class,float salary);

int main(){
	printf("Category\t\tTax\n"
	"1)Single\t\t15%% of first $17,850 plus 28 %% of excess\n"
	"2)Head of Household\t15%% of first $17,850 plus 28 %% of excess\n"
	"3)Married,Joint\t\t15%% of first $17,850 plus 28 %% of excess\n"
	"4)Married,Separate\t15%% of first $17,850 plus 28 %% of excess\n");
	printf("Input the tax class:\n");
	int taxClass;
	scanf("%d",&taxClass);
	while(taxClass>=1 && taxClass<=4){
		printf("Input your income:\n");
		float income;
		scanf("%f",&income);
		prtTax(taxClass,income);
		printf("Input the tax class:\n");
		scanf("%d",&taxClass);
	}
	system("pause");
	return 0;
}

void prtTax(int tax_class,float salary){
	float tax;
	if(tax_class==1){
		if(salary>CLS1_BASE){
			tax = CLS1_BASE * 0.15 + (salary-CLS1_BASE) * 0.28;
		}else{
			tax = salary * 0.15;
		}
	}else if(tax_class==2){
		if(salary>CLS2_BASE){
			tax = CLS2_BASE * 0.15 + (salary-CLS2_BASE) * 0.28;
		}else{
			tax = salary * 0.15;
		}
	}else if(tax_class==3){
		if(salary>CLS3_BASE){
			tax = CLS3_BASE * 0.15 + (salary-CLS3_BASE) * 0.28;
		}else{
			tax = salary * 0.15;
		}
	}else if(tax_class==4){
		if(salary>CLS4_BASE){
			tax = CLS4_BASE * 0.15 + (salary-CLS4_BASE) * 0.28;
		}else{
			tax = salary * 0.15;
		}
	}
	printf("%f\n", tax);
}