#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double przyprostokatna(double a,double b);

int main(){
	
	przyprostokatna(3.0,5.0);
	
	return 0;
}

double przyprostokatna(double a,double b){

	double c;
	c = sqrt((a*a)+(b+b));	

	printf("%f", c);
	return c;

}
