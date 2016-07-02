#include <stdio.h>
#include <stdlib.h>

struct name{
	char fname[20];
	char lname[20];
};

struct student{
	struct name person;
	float grade[3];
	double average;
};

typedef struct student Student;

void getGrades(Student * s, int length){
	for (int i = 0; i < length; i++){
		printf("Input your first name:\n");
		scanf("%s", s[i].person.fname);
		for (int k = 0; k < 3; k++){
			printf("Input the grade %d:\n", k);
			scanf("%f", &(s[i].grade[k]));
		}
	}
}

void calcAvg(Student *s, int length){
	for (int i = 0; i < length; i++){
		float sum = 0.0;
		for (int k = 0; k < 3; k++)
			sum += s[i].grade[k];
		s[i].average = sum / 3.0;
	}
}

void printNEWTYPE(const Student * s, int length){
	for (int i = 0; i < length; i++)
		printf("%s %s:\nThe average of your grades is %f.\n",
		s[i].person.fname, 
		s[i].person.lname,
		s[i].average);
}

int main(){
	Student CSIZE[4] = {
		{ { .lname = "San"} },
		{ { .lname = "Si"} },
		{ { .lname = "Wu" } },
		{ { .lname = "Liu" } }
	};

	getGrades(CSIZE, 4);
	calcAvg(CSIZE, 4);
	printNEWTYPE(CSIZE, 4);
	double sum = 0.0;
	for (int k = 0; k < 4; k++)
		sum += CSIZE[k].average;
	printf("The average of the whole class grades is %f\n", sum / 12.0);

	system("pause");
	return 0;
}