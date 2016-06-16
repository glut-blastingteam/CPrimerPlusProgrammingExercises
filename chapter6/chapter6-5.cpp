#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("Type the min and max integer:\n");
	int min,max;
	scanf("%d %d", &min, &max);
	printf("   integer      sqrt      cube\n");
	for (int i = min; min <= max; ++min)
	{
		printf("%10d%10d%10d\n", min, min*min, min*min*min);
	}
	system("pause");
	return 0;
}