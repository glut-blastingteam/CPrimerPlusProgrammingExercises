#include <stdio.h>
#include <stdlib.h>

int main(){
	int lcount = 1;
	char ch;
	while((ch = getchar())!= EOF){
		if(lcount==11){
			printf("\n");
			lcount = 1;
		}
		if(ch == ' ') printf("' '-%d ", ch);
		else if(ch == '\t') printf("\\t-%d ", ch);
		else if(ch == '\n') printf("\\n-%d ", ch);
		else if(ch <32) printf("^%c-%d ", ch+64, ch);
		else printf("%c-%d ", ch, ch);

		lcount++;
	}
    system("pause");
    return 0;
}
