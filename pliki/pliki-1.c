#include <stdio.h>
#include <stdlib.h>

int main()
{
    float i = 0.0;

    while (i <= 1) {
    	i += 0.1;
	printf("%.2f\t%.2f\t%.2f\n", i, i*i,((float)rand()/RAND_MAX));
	
    }

    return 0;
}
