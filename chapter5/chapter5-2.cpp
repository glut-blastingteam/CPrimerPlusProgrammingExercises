#include <stdio.h>
#include <stdlib.h>

int main(){
	int k;
	scanf("%d", &k); 
	int m = k + 10;
	while (k <= m){
		printf("%d ",k);
		k++;
	}
	system("pause");
	return 0;
}