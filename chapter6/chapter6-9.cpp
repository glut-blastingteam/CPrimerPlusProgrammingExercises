#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("Enter lower and upper integer limits:");
	int min,max;
	scanf("%d%d", &min, &max);

	while(min!=max){
		long sum = 0;
		for (int i = min; i <= max; ++i)
		{
			sum += i*i;
		}
		printf("The sums of the squares from %d to %d is %d\n", min*min, max*max, sum);
		printf("Enter lower and upper integer limits:");
		scanf("%d%d", &min, &max);
	}
	printf("Done\n");
	system("pause");
	return 0;
}