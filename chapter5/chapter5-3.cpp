#include <stdio.h>

int main(){
	int days;
	scanf("%d", &days);
	while (days > 0){
		printf("%d days are %d weeks, %d days.\n", days, days/7,days%7);
		scanf("%d",&days);
	}
	return 0;
}