#include <stdio.h>
#include <stdlib.h>

int main(){
	float height;
	char name[30];
	scanf("%f %s", &height, name);
	printf("%s, you are %f feet tall.\n", name, height/12.0);
	system("pause");
	return 0;
}