#include <stdio.h>
#include <stdlib.h>

int main(){
	int oddCount = 0, evenCount=0;
	double oddSum = 0.0,evenSum = 0.0;
	int num;
	scanf("%d",&num);
	while(num!=0){
		if(num%2 == 0){
			evenCount++;
			evenSum +=num;
		}else{
			oddCount++;
			oddSum +=num;
		}
		scanf("%d",&num);
	}
	printf("Odd Count:%d\nEven Count:%d\n Odd Average:%.2f\nEven Average:%.2f\n",
		oddCount, evenCount,oddSum/oddCount,evenSum/evenCount);
	system("pause");
	return 0;
}