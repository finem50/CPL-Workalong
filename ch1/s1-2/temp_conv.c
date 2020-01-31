#include <stdio.h>

// Print a Fahrenheit-Celsius table
//
int main(){

	int fahr, celsius;
	int lower, upper, step;

	step = 20; 	// Step size
	lower = 0; 	// Lower bound of the table
	upper = 300; 	// Upper bound of the table

	fahr = lower;
	while(fahr <= upper){

		celsius = 5 * (fahr - 32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}

	return 0;
}
