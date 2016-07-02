#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct{
	char month[20];
	char monthAbbr[20];
	int day;
	int monthNum;
}mon;

static const mon oneYear[12] = {
	{ "January", "JAN", 31, 1 },
	{ "Febuary", "FEB", 28, 2 },
	{ "March", "MAR", 31, 3 },
	{ "April", "APR", 28, 4 },
	{ "May", "MAY", 31, 5 },
	{ "June", "JUN", 28, 6 },
	{ "July", "JUL", 31, 7 },
	{ "August", "AUG", 28, 8 },
	{ "September", "SEP", 31, 9 },
	{ "October", "OCT", 28, 10 },
	{ "November", "NOV", 31, 11 },
	{ "December", "DEC", 28, 12 },
};

int getDays(int y, int m, int d);

int main(){

	int year, month, day;
	
	printf("input year:\n");
	scanf("%d", &year);
	
	fflush(stdin);
	printf("input month:\n");
	char m[20];
	scanf("%s", m);
	for (int i = 0; i < 12; i++){
		if (strcmp(oneYear[i].month, m) == 0 ||
			strcmp(oneYear[i].monthAbbr, m) == 0 ||
			oneYear[i].monthNum == atoi(m)
			)
			month = oneYear[i].monthNum;
	}
	printf("input day:\n");
	scanf("%d", &day);

	printf("%d-%d-%d\ntotal days:%d\n", year, month, day, getDays(year, month, day));
	system("pause");
	return 0;
}

int getDays(int y, int m, int d){
	bool isLeapYear = 0;
	if (y % 4 == 0)
		isLeapYear = true;
	int sumDay = 0;
	for (int i = 0; i < 12; i++){
		if (m > oneYear[i].monthNum){
			sumDay += oneYear[i].day;
		}
		else{
			break;
		}
	}
	if (isLeapYear && m >= 3)
		sumDay++;
	return sumDay + d;
}
