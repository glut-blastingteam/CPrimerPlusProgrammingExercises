#include <stdio.h>
#include <stdlib.h>

int main(){
	for (int i = 0; i < 5; ++i)
	{
		for (int k = 0; k <= i; ++k)
		{
			printf("$");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}