#include <stdio.h>
#include <stdlib.h>

int foo(){
	static int count = 0;
	count++;
	return count;
}

int main(){
	//driver
	int k;
	for (int i = 0; i < 5; i++)
		k = foo();
	printf("%d", k);
	system("pause");
	return 0;
}