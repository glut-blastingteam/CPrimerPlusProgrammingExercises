#include <stdio.h>
#include <stdlib.h>

int main(){
	double max;
	scanf("%lf",&max);
	double seq1 = 0;
	double seq2 = 0;

	for (int i = 1; i <= max; ++i)
	{
		seq1 += 1.0/i;
		if((i%2)!=0){
			seq2 += 1.0/i;
		}else{
			seq2 -= 1.0/i;
		}
	}
	printf("%f  %f\n", seq1, seq2);
	system("pause");
	return 0;
}