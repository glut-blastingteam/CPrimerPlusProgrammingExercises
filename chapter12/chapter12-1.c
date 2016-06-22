#include <stdio.h>
void critic(int);
int main(void) { 
	int units; 
	printf("How many pounds to a firkin of butter?\n");
	scanf("%d", &units);
	while (units != 56)
		critic(&units); 
	printf("You must have looked it up!\n");
	return 0;
}
void critic(int *units) {
	printf("No luck, chummy. Try again.\n");
	scanf("%d", units);
}