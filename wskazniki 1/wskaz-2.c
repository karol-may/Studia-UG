#include <stdio.h>
#include <stdlib.h>

int main() {   
	int len = 4;
	int _c[len], array[] = {0,-1,2,-3};
	int * _array[len];
	
	for(int i=0;i<len;i++){
		_c[i] = len-1;
		for(int k=0;k<len;k++){

			if (array[i] < array[k]) {
			
				_c[i]--;
	
			}

		}
		
		_array[_c[i]] = &array[i];
	} 
	
	for(int i=0;i<len;i++){
		printf("%d ",array[i]);
	}
	putchar(10);
	for(int i=0;i<len;i++){
		printf("%d ",*_array[i]);	
	}
	putchar(10);
	return 0;
}
