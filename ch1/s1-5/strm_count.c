#include <stdio.h>

int main(){

//	long nc;
	double nc;
	
/*	while(getchar() != EOF)
		nc++;
*/
	for(nc = 0; getchar() != EOF; nc++);

	printf("%.0f", nc);

	return 0;
}
