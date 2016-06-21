#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int wordLen(char *str){
	int i=0;
	while(*(str+i)!=' '&& i< strlen(str))
		i++;
	return i;
}

void printSorted(char *arr[], int length){
	char *tmp;
	for (int i = 0; i < length - 1; ++i)
	{
		for (int k = i + 1; k < length; k++)
		{
			if (strcmp(arr[i], arr[k])> 0){
				tmp = arr[i];
				arr[i] = arr[k];
				arr[k] = tmp;
			}
		}
	}

	for (int i = 0; i < length; i++)
	{
		puts(arr[i]);
	}
}

void printIncrease(char *arr[], int length){
	char *tmp;
	for (int i = 0; i < length - 1; ++i)
	{
		for (int k = i + 1; k < length; k++)
		{
			if ((strlen(arr[i])-strlen(arr[k]))> 0){
				tmp = arr[i];
				arr[i] = arr[k];
				arr[k] = tmp;
			}
		}
	}

	for (int i = 0; i < length; i++)
	{
		puts(arr[i]);
	}
}

void print1stWord(char *arr[], int length){
	char *tmp;
	for (int i = 0; i < length - 1; ++i)
	{
		for (int k = i + 1; k < length; k++)
		{
			if ((wordLen(arr[i])-wordLen(arr[k]))> 0){
				tmp = arr[i];
				arr[i] = arr[k];
				arr[k] = tmp;
			}
		}
	}

	for (int i = 0; i < length; i++)
	{
		puts(arr[i]);
	}
}

int main(){
	char str1[10][1024];
	
	char *str[10];
	int i = 0;
	printf("Input string\n");
	
	while (scanf("%s", str1[i]) != EOF && i < 10){
		str[i] = str1[i];
		i++;
	}
	printf("a.print the first string\nb.print as ASCII\n"
		   "c.print increasely\nd.print the length of the first word in string\n"
		   "e.quit\n");
	fflush(stdin);
	char ch;
	while((ch = getchar()) != 'e'){
		switch(ch){
			case 'a':
				puts(str[0]);
				break;
			case 'b':
				printSorted(str, 10);
				break;
			case 'c':
				printIncrease(str, 10);
				break;
			case 'd':
				print1stWord(str , 10);
				break;
			default:
				printf("Invalid character,try again!\n");
				break;
			
		}
		fflush(stdin);
	}
	system("pause");
	return 0;
}
