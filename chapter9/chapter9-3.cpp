#include <stdio.h>
#include <stdlib.h>

void chline(char ch, int i, int j){
	for (int k = 0; k < j; k++)
	{
		for (int p = 0; p < i; p++)
		{
			printf("%c", ch);
		}
		printf("\n");
	}
}

int main(){
	//driver 
	chline('c', 5, 6);
	system("pause");
	return 0;
}
