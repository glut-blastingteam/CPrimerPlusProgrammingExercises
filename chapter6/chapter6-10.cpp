#include <stdio.h>
#include <stdlib.h>

int main(){
	int num[7];
	for (int i = 0; i < 7; ++i)
	{
		scanf("%d",&num[i]);
	}
	for (int k = 6; k >= 0; --k)
	{
		printf("%d ",num[k]);
	}
	system("pause");
	return 0;
}