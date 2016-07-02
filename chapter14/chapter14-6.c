#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person{
	char fname[20];
	char lname[20];
};

typedef struct{
	int num;
	struct person name;
	int playingTime;
	int hittingTime;
	int goBarrier;
	int RBI;
	double hittingAvg;
}player;

int main(){
	player p[100];
	FILE *fp;
	if ((fp = fopen("testForChapter14-6.txt", "r"))== NULL) 
		exit(EXIT_FAILURE);
	int line = 0, f_num, f_playingTime, f_hittingTime, f_goBarrier, f_RBI;
	char f_fname[20], f_lname[20];

	while (fscanf(fp, "%d %s %s %d %d %d %d",
		&f_num, f_fname, f_lname, &f_playingTime, 
		&f_hittingTime, &f_goBarrier, &f_RBI) == 7
		&& getc(fp)!=EOF
		){
		p[line].num = f_num;
		strcpy(p[line].name.fname, f_fname);
		strcpy(p[line].name.lname, f_lname);
		p[line].playingTime = f_playingTime;
		p[line].hittingTime = f_hittingTime;
		p[line].goBarrier = f_goBarrier;
		p[line].RBI = f_RBI;
		line++;
	}
	printf("#Num\t"
			"#Player\t\t"
			"#Playing Times\t"
			"#Hitting Times\t"
			"#Go barrier Times\t"
			"#RBI\t"
			"#Hitting Average\n");
	for (int i = 0; i <line; i++){
		p[i].hittingAvg = p[i].hittingTime / p[i].playingTime;
		printf("%d\t%s %s\t%d\t%d\t%d\t%d\t%f\n",
			p[i].num,
			p[i].name.fname,
			p[i].name.lname,
			p[i].playingTime,
			p[i].hittingTime,
			p[i].goBarrier,
			p[i].RBI,
			p[i].hittingAvg);
	}
	system("pause");
	return 0;
}
