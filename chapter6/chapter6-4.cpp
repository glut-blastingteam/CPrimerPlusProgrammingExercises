#include <stdio.h>
#include <stdlib.h>

int main(){
	char stop;
	scanf("%c",&stop);
	for (char A = 'A'; A <= stop; ++A)
	{
		//blank
		for (int i = 0; i < (stop - A); ++i)
		{
			printf(" ");
		}
		//A++
		for (char up = 'A'; up <= A; up++)
		{
			printf("%c", up);
		}
		//A--
		for (char down = A-1; down >= 'A'; down--)
		{
			printf("%c", down);
		}
		//blank
		for (int i = 0; i < (int)(stop - A); ++i)
		{
			printf(" ");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}