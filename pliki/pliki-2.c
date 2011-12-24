#include <stdio.h>
#include <stdlib.h>

void saveToFile(char *filename)
{
	FILE *fout;
	fout = fopen(filename, "w");
    float i = 0.0;

    while (i <= 1) {
    	i += 0.1;
		fprintf(fout,"%.2f\t%.2f\t%.2f\n", i, i*i,((float)rand()/RAND_MAX));

    }

}

int main(int argc, char *argv[])
{
	
	
    if (argc != 2) {
	printf("Złe argumenty! Użyj \"%s nazwa-pliku-docelowego.dat\"\n",
	       argv[0]);
    } else {

	saveToFile(argv[1]);

    }
    
    printf("\n");
    return EXIT_SUCCESS;
}
