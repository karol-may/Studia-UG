#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
  FILE *in_handle;
  char bufor[BUFSIZ];
  unsigned int ui;
  double x, y;
  in_handle = fopen(argv[1], "r");
  /*
  45 = '-'
  10 = '\n'
  */
  
  int first = 1;
  
  while (fgets(bufor, BUFSIZ, in_handle) != NULL) {
	if ((bufor[0]!=45)&&(bufor[0]!=10)){
		
		sscanf(bufor, "%u %lf %lf", &ui, &x, &y);

		if (first){
			// zmiana tresci zadania
			//ui = 0;
			first = 0;	
		}
		
		printf("--> %d %.2f %.2f\n", ui, x, y);



	}

  }
  fclose(in_handle);
  return EXIT_SUCCESS;
}
