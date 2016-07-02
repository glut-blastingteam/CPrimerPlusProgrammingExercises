#include <stdio.h>
#include <stdlib.h>

struct person{
	char fname[20];
	char lname[20];
	char mname[20];
};

typedef struct{
	long socialSecurityNum;
	struct person p;
}NEWTYPE;

void printNEWTYPE(NEWTYPE * nt, int length){
	for (int i = 0; i < length; i++){
		if (nt[i].p.mname[0] == '\0'){
			printf("%s, %s - %ld\n", 
				(&nt[i])->p.fname, 
				(&nt[i])->p.lname, 
				(&nt[i])->socialSecurityNum);
		}
		else{
			printf("%s, %s %s. - %ld\n", 
				(&nt[i])->p.fname, 
				(&nt[i])->p.lname, 
				(&nt[i])->p.mname, 
				(&nt[i])->socialSecurityNum);
		}
	}
}

void printNEWTYPE_V(NEWTYPE nt){
	if (nt.p.mname[0] == '\0'){
		printf("%s, %s - %ld\n",
			nt.p.fname,
			nt.p.lname,
			nt.socialSecurityNum);
	}
	else{
		printf("%s, %s %s. - %ld\n",
			nt.p.fname,
			nt.p.lname,
			nt.p.mname,
			nt.socialSecurityNum);
	}
}

int main(void)
{
	//driver for #TASK-A
	NEWTYPE ntype[3] = {
		{
			30203864,
			{
				"Zhang",
				"Shan",
				"M"
			}
		}, 
		{
			30203865,
			{
				"Li",
				"Si",
				"K"
			}
		}, 
		{
			30203866,
			{
				"Yang",
				"Wu",
				""
			}
		}
	};
	printNEWTYPE(ntype, 3);

	//driver for #TASK-B
	for (int i = 0; i < 3; i++)
	{
		printNEWTYPE_V(ntype[i]);
	}
	system("pause");
	return 0;
}