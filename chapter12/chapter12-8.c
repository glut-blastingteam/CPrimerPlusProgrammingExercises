// pe12-8.c 
#include <stdio.h>
#include <stdlib.h>

int * make_array(int elem, int val); 
void show_array(const int ar[], int n); 

int main(void) {
	int * pa;
	int size;
	int value;
	printf("Enter the number of elements: ");
	scanf("%d", &size);  
	while (size > 0){      
		printf("Enter the initialization value: ");     
		scanf("%d", &value);  
		pa = make_array(size, value);    
		if (pa) {          
			show_array(pa, size);
			free(pa);      
		}      
		printf("Enter the number of elements (<1 to quit): ");
		scanf("%d", &size);  
	}  
	printf("Done.\n"); 
	return 0; 
}

int * make_array(int elem, int val){
	int * res = (int *)malloc(sizeof(int) * elem);
	for (int i = 0; i < elem; i++)
		res[i] = val;
	return res;
}

void show_array(const int ar[], int n){
	for (int i = 0,flag=0; i < n; i++,flag++)
	{
		if (flag == 8){
			printf("\n");
			flag = 0;
		}
		printf("%d", ar[i]);
	}
	return;
}
