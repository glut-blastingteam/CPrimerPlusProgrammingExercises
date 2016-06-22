#include <stdio.h>
#include <stdlib.h>

int rollem(int sides)
{
	int roll;
	roll = rand() % sides + 1;
	return roll;
}

int roll_n_dice(int dice, int sides)
{
	int d;
	int total = 0;
	if (sides < 2)
	{
		printf("Need at least 2 sides.\n");
		return -2;
	}
	if (dice < 1)
	{
		printf("Need at least 1 dice.\n");
		return -1;
	}
	for (d = 0; d < dice; d++)
		total += rollem(sides);

	return total;
}

int main(void)
{
	int sets, sides, dice;
	puts("Enter the number of sets; enter q to quit.");
	while (scanf("%d", &sets) == 1)
	{
		puts("How may sides and how many dice?");
		scanf("%d %d", &sides, &dice);
		printf("Here are %d sets of %d %d-sided throws.\n", sets, dice, sides);

		for (int i = 0; i < sets; i++)
			printf("%3d", roll_n_dice(dice, sides));
		printf("\n");
		puts("How many sets? Enter q to quit.");
	}
	system("pause");
	return 0;
}