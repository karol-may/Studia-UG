#include <stdio.h>
#include <stdlib.h>

void saveToFile(char *filename)
{
	FILE *fout;
	fout = fopen(filename, "w");
    int i = 0;
    float sum = 0.0;

    while (i < 1000) {
    	i += 1;
    	sum += ((float)rand());
		fprintf(fout,"%d\t%f\t%f\n",i,sum,sum/i);

    }

}

int main(int argc, char *argv[])
{
	
	
  /*  if (argc == 2 && argv[1]!=(char*)"-m") {
	printf("Złe argumenty! Użyj \"%s -m aby wywołać program gnuplot do wyświetlenia wyników\"\n",
	       argv[0]);
    } else 
    */
    /*if (argc <= 1){
*/
	saveToFile("data1.dat");
	/*
	system("gnuplot -e \"plot 'dane.dat' using 1:2 with lines\"");
		
	}*/
    
    printf("\n");
    return EXIT_SUCCESS;
}
