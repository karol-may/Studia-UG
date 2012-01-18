#include <stdio.h>
#include <stdlib.h>

int main(){
	int len;
	
	printf("Wpisz długość tablicy: ");
	scanf("%d", &len);
	
	float array[len], _ans[len];

	for(int i=0;i<len;i++)

	{
		scanf("%f", &array[i]);
	}

	
	int _c[len];
	
	for(int i=0;i<len;i++){
		_c[i] = len-1;
		for(int k=0;k<len;k++){

			if (array[i] < array[k]) {
			
				_c[i]--;
	
			}

		}
		
		_ans[_c[i]] = array[i];
	}
	
	printf("\n%f %f\n",_ans[0],_ans[len-1]);

	return 0;

}
