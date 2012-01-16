#include <stdio.h>
#include <stdlib.h>

int main()
{
  int c;

  c=getchar();

  while (c!=EOF){

      switch (c) {
      case ' ': putchar(' ');
        c=getchar();
        break;
      case '\t': putchar(' ');
        c=getchar();
        break;
      case EOF: 
      	exit(EXIT_SUCCESS);
      	
      default: putchar(c);
        c=getchar();
        break;
    }
  }

  return EXIT_SUCCESS;
}
