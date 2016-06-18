#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n){
	if (n == 2 || n == 1){
		return 1;
	}
	else{
		int l1 = 1;
		int l2 = 1;
		int current = 0;
		for (int i = 0; i < n-2; i++)
		{
			current = l1 + l2;
			l1 = l2;
			l2 = current;
		}
		return current;
	}
}

int main(void){
	printf("%d", fibonacci(7));
	system("pause");
	return 0;
}