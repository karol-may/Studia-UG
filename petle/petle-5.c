#include <stdio.h>
#include <stdlib.h>
/*
. Napisz program, który wczyta ze stdin 6 liczb całkowitych do tablicy, 
a następnie wypisze zawartość tej tablicy od początku i od końca.
*/
int main()
{
	/* POBIERANIE DANYCH DO TABLICY */	

   int tablica[6];
   while (scanf("%d %d %d %d %d %d", &tablica[0], &tablica[1], &tablica[2], &tablica[3], &tablica[4], &tablica[5])!=EOF) 
   {
   		tablica = sort(tablica);
		printf("\n ------>> \n");
		for(int i=0; i<=5;++i){
			printf("%d ", tablica[i]);
		 
		}
		printf("\n <<------ \n");
		for(int i=5; i>=0;--i){
			printf("%d ", tablica[i]);
		 
		}
		printf("\n THE END \n");
		exit(EXIT_SUCCESS);
   }

return 0;
}
