#include <stdio.h>
#include <stdlib.h>


void copy2DArr(int a, int b, const double arr[a][b], double target[a][b]){
	for (int i = 0; i < a; ++i)
	{
		for (int k = 0; k < b; ++k)
		{
			target[i][k] = arr[i][k];
		}
	}
	return;
}

void prt2dArr(int a, int b, double arr[a][b]){
	for (int i = 0; i < a; ++i)
	{
		for (int k = 0; k < b; ++k)
		{
			printf("arr[%d][%d] == %.2f ", i, k, arr[i][k]);
		}
		printf("\n");
	}
	return;
}


int main(){
    double arr[3][5] = {
        {1.0,2.0,3.0,4.0,5.0},
        {-1.0,-2.0,-3.0,-4.0,-5.0},
        {11.0,52.55,69.4,65.0,56.4}
    };
    double target[3][5];
    copy2DArr(3, 5, arr, target);
    printf("arr[3][5]\n");
    prt2dArr(3, 5, arr);
    printf("target[3][5]\n");
    prt2dArr(3, 5, target);
    system("pause");
    return 0;
}
