#include <stdio.h>
#include <stdlib.h>

int main(){

	int array[] = {-9, -5, 4, 3};
	int len = 4;
	
	int _ans[len], _c[len],_wart;
	
	for(int i=0;i<len;i++){
		printf("%d \n",i);
		_c[i] = len-1-i;
		for(int k=i;k<len;k++){
			printf(" %d \n",k);

			if (array[i] < array[k]) {

				_c[i]--;
	
			}

		}
		if (i&&(_c[i]>=_c[])){ 
			_c[i-1] 
		}
		printf("  %d \n",_c[i]);
		
		_ans[_c[i]] = array[i];
	}
	
	for(int i=0;i<len;i++){ 
	
		printf("%d ",_ans[i]);
	
	}

	putchar(10);

	return 0;

}
