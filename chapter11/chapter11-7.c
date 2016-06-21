#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * string_in(char* s1, char* s2){
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    char succeed[2] = "S";

    for(int i = 0; i<=len1-len2;i++){
        int t = 0;
        for(int k=0;k<len2;k++)
            if(s1[i+k]==s2[k])
                t++;
        
        if(t==len2)
            return succeed;
    }
    return '\0';
}

int main(){
	char str1[1024], str2[1024];
	while (gets(str1) != NULL && gets(str2) != NULL){
		if (string_in(str1, str2)!='\0')
			printf("Found!\n");
		else
			printf("Not found.\n");
		fflush(stdin);
		memset(str1, '\0', 1024);
		memset(str2, '\0', 1024);
	}
	system("pause");
	return 0;
}
