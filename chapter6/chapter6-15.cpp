#include <stdio.h>
#include <stdlib.h>

int main(){
	int years = 0;
	double Daphne = 100.0;
	double Deirdre = 100.0;
	do{
		Daphne += 10.0;
		Deirdre += Deirdre*0.05;
		years++;
	}while(Deirdre <= Daphne);
	printf("Daphne:%f\nDeirdre:%f\nYears:%d\n", Daphne,Deirdre,years);
	system("pause");
	return 0;
}