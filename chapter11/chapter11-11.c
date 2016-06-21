#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int wordCounter(char *str){
	int i = 0;
	int count = 0;
	while (str[i]!='\0'){
		if (isspace(str[i])){
			count++;
		}
		i++;
	}

	return count;
}

int lowerCounter(char *str){
	int i = 0;
	int count = 0;
	while (str[i] != '\0'){
		if (islower(str[i])){
			count++;
		}
		i++;
	}

	return count;
}

int upperCounter(char *str){
	int i = 0;
	int count = 0;
	while (str[i] != '\0'){
		if (isupper(str[i])){
			count++;
		}
		i++;
	}

	return count;
}
int punctCounter(char *str){
	int i = 0;
	int count = 0;
	while (str[i] != '\0'){
		if (ispunct(str[i])){
			count++;
		}
		i++;
	}

	return count;
}
int numCounter(char *str){
	int i = 0;
	int count = 0;
	while (str[i] != '\0'){
		if (isdigit(str[i])){
			count++;
		}
		i++;
	}

	return count;
}

int main(){
	char str[1024];
	while (gets(str) != NULL){
		printf("lowerCounter:%d\nupperCounter:%d\n"
			"punctCounter:%d\nnumCounter:%d\n"
			"wordCounter:%d\n",
			lowerCounter(str), upperCounter(str),
			punctCounter(str), numCounter(str),
			wordCounter(str));
		fflush(stdin);
	}
	system("pause");
	return 0;
}
