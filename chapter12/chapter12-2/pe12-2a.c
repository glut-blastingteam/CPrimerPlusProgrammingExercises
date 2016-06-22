#include "pe12-2a.h"

static int _mode = 0;
static int _distance = 0;
static double _fuel = 0.0;

void set_mode(int mode){
	_mode = mode;
}

void get_info(){
	if (_mode == 0){
		//us
		printf("Enter distance traveled in kilometers:");
		scanf("%d", &_distance);
		printf("Enter fuel consumed in liters:");
		scanf("%lf", &_fuel);
	}
	else if (_mode == 1){
		//std
		printf("Enter distance traveled in miles:");
		scanf("%d", &_distance);
		printf("Enter fuel consumed in gallons:");
		scanf("%lf", &_fuel);
	}
	else{
		printf("Invalid mode specified.Mode 1(US) used.\n");
		//default as us
		printf("Enter distance traveled in kilometers:");
		scanf("%d", &_distance);
		printf("Enter fuel consumed in liters:");
		scanf("%lf", &_fuel);
	}
}

void show_info(){
	if (_mode == 0){
		printf("Fuel consumption is %f liters per 100km\n",(_fuel/_distance)*100.0);
	}
	else if (_mode == 1){
		printf("Fuel consumption is %f miles per gallon\n",_distance/_fuel);
	}
}