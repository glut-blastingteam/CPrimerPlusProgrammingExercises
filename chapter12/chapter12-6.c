#include <stdio.h>
#include <stdlib.h>

int rand10(){
	return rand() % 10 + 1;
}

int main(){
	//driver
	int numCount[10] = { 0 };

	for (int i = 0; i < 1000; i++){
		int num= rand10();
		for (int k = 1; k <= 10; k++)
		{
			if (num == k){
				numCount[k - 1]++;
			}
		}
	}
	
	for (int k = 0,t=0; k < 10; k++)
		printf("Number:%d  Count:%d\n", k+1, numCount[k]);

	system("pause");
	return 0;
}