#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 100 // max book number
struct book {
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};

void alphabetSort(struct book b[],int count){
	struct book * bptr[count];
	for (int t = 0; t < count; ++t){
		bptr[t] = &b[t];
	}

	struct book * temp;
	//abfecd
	for (int i = 0; i < count-1; ++i){
		for (int k = i+1; k < count; ++k)
		{
			if(bptr[i]->title[0] >= bptr[k]->title[0]){
				temp = bptr[i];
				bptr[i]= bptr[k];
				bptr[k] = temp; 
			}
		}
	}

	for (int index = 0; index < count; index++)
		printf("%s by %s: $%.2f\n", bptr[index]->title,
				bptr[index]->author,bptr[index]->value
	);
}

void valueSort(struct book b[],int count){
	struct book * bptr[count];
	for (int t = 0; t < count; ++t){
		bptr[t] = &b[t];
	}

	struct book * temp;
	//abfecd
	for (int i = 0; i < count-1; ++i){
		for (int k = i+1; k < count; ++k)
		{
			if(bptr[i]->value > bptr[k]->value){
				temp = bptr[i];
				bptr[i]= bptr[k];
				bptr[k] = temp; 
			}
		}
	}

	for (int index = 0; index < count; index++)
		printf("%s by %s: $%.2f\n", bptr[index]->title,
				bptr[index]->author,bptr[index]->value
	);
}


int main(void)
{
	struct book library[MAXBKS]; // book struct array
	int count = 0;
	int  index;

	printf("Please enter the book title.\n");
	printf("Press [enter] at the satrt of a line to stop.\n");
	while (count < MAXBKS && gets(library[count].title) != NULL
		&& library[count].title[0] != '\0')
	{
		printf("Now enter the author.\n");
		gets(library[count].author);
		printf("Now enter the value.\n");
		scanf("%f", &library[count++].value);
		while (getchar() != '\n')
			continue;
		if (count < MAXBKS)
			printf("Enter the next title.\n");
	}
	if (count > 0)
	{
		printf("Here is the list of your books: \n");
		for (index = 0; index < count; index++)
			printf("%s by %s: $%.2f\n", library[index].title,
			library[index].author,
			library[index].value
			);

		puts("In alphabetical order: ");
		alphabetSort(library, count);
		puts("In value order: ");
		valueSort(library, count);
	}
	else
		printf("No books? Too bad.\n");
	system("pause");
	return 0;
}