#include <stdio.h>
#include <stdlib.h>

int main(){
	int years = 0;
	double lucky = 100.0;
	while (lucky > 0){
		lucky += 0.08*lucky;
		lucky -= 10;
		years++;
	}
	printf("%d\n", years);
	system("pause");
	return 0;
}