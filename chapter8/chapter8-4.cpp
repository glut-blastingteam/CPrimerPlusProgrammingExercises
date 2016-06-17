#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	char ch,lchar;
	int wordCount = 0;
	int charCount = 0;
	while((ch=getchar()) != EOF){
		if(isalpha(ch)){
			lchar = ch;
			charCount++;
		}else if(ch == ' ' && isalpha(lchar)){
			lchar = ' ';
			wordCount++;
		}else if(ch == '\n' && isalpha(lchar)){
			lchar = '\n';
			wordCount++;
		}else{
			lchar = ch;
		}
	}
	double avg = charCount*1.0 / wordCount*1.0;
	printf("Total word:%d\nAverage character per word:%.2f\n", charCount, avg);
    system("pause");
    return 0;
}