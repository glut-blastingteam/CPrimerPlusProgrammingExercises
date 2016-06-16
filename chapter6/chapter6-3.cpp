#include <stdio.h>
#include <stdlib.h>

int main(){
	for (char F = 'F'; F >= 'A'; --F)
	{
		for (char inner= 'F'; inner >= F; --inner)
		{
			printf("%c",inner);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}