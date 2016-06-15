#include <stdio.h>
#define M 60

int main(){
	int minute;
	scanf("%d", &minute); //<=0 to quit;
	while (minute > 0){
		printf("%d hour(s) and %d min(s)\n", (int)(minute / M), minute%M);
		scanf("%d",&minute);
	}
	return 0;
}