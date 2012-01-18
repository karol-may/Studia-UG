#include <stdio.h>
#include <stdlib.h>

/*
. Napisz program, który wczyta ze stdin 6 liczb całkowitych do tablicy, 
a następnie wypisze zawartość tej tablicy od początku i od końca.
*/
int my_compare (const void * a, const void * b);

int main()
{
	/* POBIERANIE DANYCH DO TABLICY */	

	int tablica[6];
	for(int i=0;i<6;i++)
	{
		scanf("%d", &tablica[i]);
	}

	qsort(tablica, 6, sizeof(int), my_compare);
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

return 0;
}

int my_compare (const void * a, const void * b)
{
    int _a = *(int*)a;
    int _b = *(int*)b;
    return ( _a - _b );
}
