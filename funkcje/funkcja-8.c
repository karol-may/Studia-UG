#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
  int random_int, user_int;

  /* initialize random seed: */
  srand ( time(NULL) );

  /* generate secret number: */
  random_int = rand() % 1000 + 1;

  do {
    printf ("Guess the number (1 to 1000): ");
    scanf ("%d",&user_int);
    if (random_int<user_int) puts ("The secret number is lower");
    else if (random_int>user_int) puts ("The secret number is higher");
  } while (random_int!=user_int);

  puts ("Congratulations!");
  return 0;
}
