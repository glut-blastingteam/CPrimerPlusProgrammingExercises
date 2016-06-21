#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <limits.h>
//#define INT_MAX       2147483647    /* maximum (signed) int value */
#define INTMAX_LEN 10 

int atoi(char *str){
	if (str[0] == '+'){
		int ans = 0;
		int j = 1; 

		for (int i = strlen(str)-1; i > 0; i--)
		{
			ans += (((int)str[i]) - 48) * j;
			j *= 10;
		}
		return ans;
	}
	else if (str[0] == '-'){
		int ans = 0;
		int j = 1;

		for (int i = strlen(str) - 1; i > 0; i--)
		{
			ans += (((int)str[i]) - 48) * j;
			j *= 10;
		}
		return -ans;
	}
	else{
		int ans = 0;
		int j = 1;

		for (int i = strlen(str) - 1; i >= 0; i--)
		{
			ans += (((int)str[i]) - 48) * j;
			j *= 10;
		}
		return ans;
	}
}

int main(int argc, char *argv[]){
	printf("%d", atoi("-1234567890"));
	system("pause");
	return 0;
}