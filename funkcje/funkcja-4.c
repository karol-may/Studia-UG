#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	int p;
	scanf("%d",&p);
	
	
	char buffer[256];

	snprintf(buffer, sizeof(buffer), "%d", p);

	for (int i = strlen(buffer);i>0;i++){
	
		printf("%c", buffer[i-1]);
	}
	return 0;
}
