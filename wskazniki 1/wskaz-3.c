#include <stdio.h>
#include <stdlib.h>

int main() {   
	double *(*a[10])[5];
	
	//double *b[2];
	
	double d1 = 13.2;
	double d2 = 1.23;
	double d3 = 13.32;
	double d4 = 1.3;
	double d5 = 21.2;
					
	double* b[] = { &d1, &d2, &d3, &d4, &d5 };
	
	a[9] = *b;
	
	
	printf("%f\n",*(*(a[9])[2]));
	
	
	return 0;
}
