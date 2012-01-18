#include <stdio.h>
#include <stdlib.h>

/*
void rysuj(

	char c[2], // znak 0 i znak 1
	int x,   // ilość wystąpień znaku 0
	int l    // ilość (wsystkich ) znaków w napisie do dopełnienia znakiem 1
	);
	

*/

void rysuj(char c[2],int x,int l);

int main()
{
/*

	l = Długość podstawy trójkąta ( maksymalna ilośc gwiazdek )

*/

	int l = 5;
	
	l--;

	for(int i = 1; i<=l; i++){


		rysuj("> ",i,l);
		
	}


	for(int i = l; i>0; i--){

		rysuj("> ",i,l);
		
	}


	for(int i = 0; i<l; i++){

		rysuj(" <",i,l);
		
	}
	
	for(int i = l-1; i>=0; i--){

		rysuj(" <",i,l);
		
	}
	
	return 0;
}

void rysuj(char c[2],int x,int l){

	for (int i=0;i<l;i++){
		if (i<x){ putchar(c[0]); }
		else{ putchar(c[1]); }
		if (i==(l-1)){ putchar(10); }
	}

}
