#include <stdio.h>

// Print a Fahrenheit-Celsius table
//
int main(){

//	int fahr, celsius;
	float fahr, celsius;
	int lower, upper, step;

	step = 20; 	// Step size
	lower = 0; 	// Lower bound of the table
	upper = 300; 	// Upper bound of the table

	fahr = lower;
	while(fahr <= upper){

		celsius = 5.0 * (fahr - 32.0) / 9.0;
//		printf("%d\t%d\n", fahr, celsius);
		printf("%3f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}

	return 0;
}
