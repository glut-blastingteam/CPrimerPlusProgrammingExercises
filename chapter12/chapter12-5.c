#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
	return *(int *)b - *(int *)a;
}

int rand100(){
	return rand() % 100 + 1;
}
int main(){
	//driver
	int num[100];

	for (int i = 0; i < 100; i++)
		num[i] = rand100();

	qsort(num, 100, sizeof(int), cmp);

	for (int k = 0; k < 100; k++)
		printf("%d\n",num[k]);

	system("pause");
	return 0;
}