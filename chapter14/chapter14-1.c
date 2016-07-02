#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char month[10];
	char monthAbbr[4];
	char monthNum[15];
	int days;
}month;

int main(){
	month feb = { "Febuary", "Feb", "two", 28 };
	printf("%s\n%s\n%s\n%d\n", 
		feb.month, feb.monthAbbr, feb.monthNum, feb.days);
	system("pause");
	return 0;
}
