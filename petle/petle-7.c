#include <stdio.h>
#include <stdlib.h>

int main(){
	int len;
	
	printf("Wpisz długość tablicy: ");
	scanf("%d", &len);
	
	float array[len];

	for(int i=0;i<len;i++)

	{
		scanf("%f", &array[i]);
	}

	
	int _c=0;
	
	for(int i=0;i<len;i++){
		if (array[i] > 0){
			_c++;
		}
	}
	
	printf("\n%i\n",_c);

	return 0;

}
