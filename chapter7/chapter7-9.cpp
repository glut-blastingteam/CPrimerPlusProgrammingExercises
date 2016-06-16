#include <stdio.h>
#include <stdlib.h>

int main(){
	int num;
	scanf("%d",&num);
	for (int i = num; i >= 1; --i)
	{
		int primerCount=0;
		int p = i;
		while(p>=1){
			if ((i%p == 0) || (i%p == i)){
				primerCount++;
			}
			p--;
		}
		if(primerCount ==2){
			printf("%d ", i);
			primerCount = 0;
		}
		else{
			primerCount = 0;
		}
	}
	system("pause");
	return 0;
}