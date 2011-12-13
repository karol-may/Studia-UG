#include <stdio.h>

int main(){
	int wynik = 0;
	int i = 1;
	while((wynik = i*i)<=2010){
		printf("%d^2 = %d\n",i,wynik);
		++i;
	}
	return 0;
}
