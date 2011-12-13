#include <stdio.h>

int main(){
	int i,r;

	scanf("%i", &r);
	int l = 1;
	for (i = r;i>=1;i--){
		l = l*i;
	}
	printf("%i\n", l);
	return 0;
}
