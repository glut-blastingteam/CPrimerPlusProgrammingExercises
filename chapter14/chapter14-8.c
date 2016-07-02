#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct{
	int num;
	char fname[20];
	char lname[20];
	bool isReserve;
}seat;

void showEmpty(seat s[]){
	for (int i = 0; i < 12; i++){
		if (s[i].isReserve)
			printf("Seat #%d is reserve.\n",s[i].num);
	}
}

void assign(seat s[]){
	char fname[20], lname[20];
	printf("Input your name:\n");
	scanf("%s %s", fname, lname);
	int num;
	printf("Input the number of the seat you want to assign:\n");
	fflush(stdin);
	scanf("%d", &num);
	for (int i = 0; i < 12; i++){
		if (s[i].num == num){
			s[i].isReserve = false;
			strcpy(s[i].fname, fname);
			strcpy(s[i].lname, lname);
		}
	}
	printf("Assigned!\n");
}

void deleteAssign(seat s[]){
	int num;
	printf("Input the number of seat you want to delete:\n");
	scanf("%d", &num);

	for (int i = 0; i < 12; i++){
		if (s[i].num == num){
			s[i].isReserve = true;
			strcpy(s[i].fname, "");
			strcpy(s[i].lname, "");
		}
	}
	printf("Deleted!\n");
}

int main(){
	seat s[12];
	printf("To choose a function, enter its letter label:\n"
		"a)Show number of empty seats\n"
		"b)Show list of empty seats\n"
		"c)Show alphabetical list of seats\n"
		"d)Assign a customer to a seat assignment\n"
		"e)Delete a seat assign\n"
		"f)Quit\n");

	FILE *fp;
	if ((fp = fopen("planeSeat.dat", "r")) == NULL){
		for (int i = 0; i < 12; i++){
			s[i].num = i;
			s[i].isReserve = true;
		}
	}
	else{
		char fname[20], lname[20];
		int num, isReserve;
		int line = 0;
		while (fscanf( fp, "%d %s %s %d", &num, fname, lname, &isReserve) == 4){
			for (int k = 0; k < 12; k++){
				if (s[k].num == num){
					strcpy(s[k].fname, fname);
					strcpy(s[k].lname, lname);
					s[k].isReserve = isReserve;
				}
			}
			line++;
		}
	}

	char ch;
	while (scanf("%c", &ch) == 1 && ch != 'f'){
		switch (ch){
		case'a':
			showEmpty(s);
			fflush(stdin);
			break;
		case'b':
			//what is it means..
		case'c':
			//dont know too...
		case'd':
			assign(s);
			fflush(stdin);
			break;
		case'e':
			deleteAssign(s);
			fflush(stdin);
			break;
		case'f':
		default:
			printf("Invalid letter,try again.");
			fflush(stdin);
			break;
		}
	}
}