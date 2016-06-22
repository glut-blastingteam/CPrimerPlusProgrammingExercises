//pe12-2b.c
#include <stdio.h>
#include "pe12-2a.h"
int main(void){
	int mode;

	printf("Enter 0 for metric mode, 1 for US mode:");
	scanf("%d", &mode);
	while (mode >= 0){
		int *md = (int *)malloc(sizeof(int));
		int *dst = (int *)malloc(sizeof(int));
		double *fuel = (double *)malloc(sizeof(double));

		set_mode(md,mode);
		get_info(md,dst,fuel);
		show_info(md,dst,fuel);
		printf("Enter 0 for metric mode, 1 for US mode:");
		printf("(-1 to quit):");
		scanf("%d", &mode);
	}
	printf("Done");
	return 0;
}