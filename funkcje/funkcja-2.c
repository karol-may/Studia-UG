#include <stdio.h>
#include <stdlib.h>

int silnia(int n);

int main(){
	int s;
	for(int x = 0; x<10;x++){
	s = silnia(x);
	printf("%d\n", s);
	
	}
	return 0;
}

int silnia(int n){
	if (n<0){printf("Błąd! n musi być liczbą naturalną!");}
	int s = 1;
	for (int i=1;i<=n;i++){
		s = s * i;
	}
	
	return s;

}
