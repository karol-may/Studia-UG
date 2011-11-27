#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>


int random_int()
{

    /* generate secret number: */
    return rand() % 11;

}

int tab[5][3];

void generate_tasks(int qty)
{


    int i;
    for (i = 0; i < qty; i++) {
	tab[i][0] = random_int();
	tab[i][1] = random_int();
	tab[i][2] = tab[i][0] * tab[i][1];
    }
}



int main()
{
    int ans;


    /* initialize random seed: */
    srand(time(NULL));

    int qty = sizeof(tab) / sizeof(tab[0]);
    
    generate_tasks(qty);
    printf("Hi! There are few questions for you: \n ");
    int i;
    for (i = 0; i < qty; i++) {
	printf("\n \t %d * %d = ", tab[i][0], tab[i][1]);
	scanf("%d", &ans);
		if (tab[i][2] == ans) {
			printf("OK!");
		} else {
			printf("SORRY! It's %d\n", tab[i][2]);
		}

    }
return 0;
}
