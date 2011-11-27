#include <stdio.h>
#include <math.h>


int random_int() {

	 /* initialize random seed: */
	 srand ( time(NULL) );

	/* generate secret number: */
	return rand() % 11;


}

 int tab[5][2];   
 
void generate_tasks(int qty){
	

	int i;
	for (i=0; i<qty; i++){
	tab[i][0] = random_int();
	tab[i][1] = random_int();
	tab[i][2] = tab[i][0] * tab[i][1];
	}
}



int main()
{
	
	
	
	int ans;
    
    int qty = sizeof tab;
	generate_tasks(qty);
	printf("Hi! There is few questions for you: \n ");
	int i;
	for (i=0; i<qty; i++){
		printf("\n \t %d * %d = ", tab[i][0],tab[i][1] );
		scanf("%d",  &ans);
		if (tab[i][2] == ans) { printf("OK!"); } else { printf("SORRY! It's %d", tab[i][2]); }
		
	}
	
}
