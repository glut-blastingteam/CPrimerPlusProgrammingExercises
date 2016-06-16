#include <stdio.h>
#include <stdlib.h>

int main(){
	const double artichokes = 1.25;
	const double beets = 0.65;
	const double carrots = 0.89;

	//purchase information
	double totalPound;
	double discount;
	double sum;
	double aCharge, bCharge, cCharge;
	double shipping;

	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	while (a >= 0 && b >= 0 && c >= 0){
		totalPound = a + b + c;
		sum = a*artichokes + b*beets + c*carrots;
		if (sum > 100)
			discount = sum*0.5;
		aCharge = artichokes * a;
		bCharge = beets *b;
		cCharge = carrots * c;
		if (totalPound <= 5){
			shipping = 3.5;
		}else if (totalPound > 5 && totalPound <= 20){
			shipping = 10.00;
		}else{
			shipping = 8 + (totalPound - 20)*0.1;
		}
		scanf("%lf %lf %lf", &a, &b, &c);
	}
	system("pause");
	return 0;
}