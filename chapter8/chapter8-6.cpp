#include <stdio.h>
#include <stdlib.h>

//yet another get_first() function;
char get_first(void){
	int ch,ret = 0;
	while ((ch=getchar())!= '\n'){
		if (ch != ' '){
			ret = ch;
			break;
		}
		else{
			continue;
		}
	}
	return ret;
}

int main(){
	//function test;
	int k =get_first();
	printf("%c", k); 
	system("pause");
	return 0;
}
