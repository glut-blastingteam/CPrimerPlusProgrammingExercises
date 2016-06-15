#include <stdio.h>
#include <stdlib.h>

int main(){
	int k;
	scanf("%d", &k);
	while (k >= 0){
		int sum = 0;
		while (k >= 0){
			sum = sum + k*k;
			k--;
		}
		printf("%d\n", sum);
		scanf("%d", &k);
	}
	return 0;
}