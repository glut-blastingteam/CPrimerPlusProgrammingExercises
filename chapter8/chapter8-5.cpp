#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
	printf("Pick an integer from 1 to 100.I will try to guess \n");
	int max = 100;
	int min = 0;
	int guess = 50;
	char respond = ' ';
	bool guessed = false;

	printf("Uh..is your number %d?\n", guess);
	while (guessed == false && ((respond=getchar())!='y')){
		if (respond == 'b'){
			min = guess;
			guess = (min + max) / 2;
			printf("Then it is %d?(bigger=b,small=s,right=y)\n", guess);
		}
		else if (respond == 's'){
			max = guess;
			guess = (max + min) / 2;
			printf("Then it is %d?(bigger=b,small=s,right=y)\n", guess);
		}
		else if (respond == 'y'){
			guessed = true;
		}
	}
	printf("I know I could do it!\n");
	system("pause");
	return 0;
}