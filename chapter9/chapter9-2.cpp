#include <stdio.h>
#include <stdlib.h>

//make sure i<j before using this function;
void chline(char ch, int i, int j){
	for (int k = 0; k <= i; k++)
	{
		printf(" ");
	}
	for (int p = 0; p <= (j-i); p++)
	{
		printf("%c", ch);
	}
	printf("\n");
}

int main(){
	//driver 
	chline('c', 5, 6);
	system("pause");
	return 0;
}
