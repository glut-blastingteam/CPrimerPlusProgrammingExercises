#include <stdio.h> 
#include <stdlib.h> //to show data
#define MONTHS 12    // number of months in a year 
#define YEARS   5    // number of years of data 

float totalYears(const float arr[][12], int length){
	int year, month;
	float total, subtot;
	for (year = 0, total = 0; year < length; year++){
		// for each year, sum rainfall for each month        
		for (month = 0, subtot = 0; month < 12; month++)
			subtot += *(*(arr + year) + month); //subscript to pointer
		printf("%5d %15.1f\n", 2000 + year, subtot);
		total += subtot; // total for all years     
	}
	return total;
}

void totalMonths(const float arr[][12], int length){
	int month, year;
	float subtot, total;
	for (month = 0; month < 12; month++){
		// for each month, sum rainfall over years 
		for (year = 0, subtot = 0; year < length; year++)
			subtot += *(*(arr + year) + month); //subscript to pointer
		printf("%4.1f ", subtot / YEARS);
	}
	return;
}

int main(void) {
	// initializing rainfall data for 2000 - 2004    
	const float rain[YEARS][MONTHS] = {
		{ 4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6 },
		{ 8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3 },
		{ 9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4 },
		{ 7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2 },
		{ 7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2 }
	};

	printf(" YEAR    RAINFALL  (inches)\n");
	float total = totalYears(rain, YEARS);
	printf("\nThe yearly average is %.1f inches.\n\n", total / YEARS);

	printf("MONTHLY AVERAGES:\n\n");
	printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct ");
	printf(" Nov  Dec\n");
	totalMonths(rain, YEARS);
	printf("\n");

	system("pause");
	return 0;
}