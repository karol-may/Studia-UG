#include <stdio.h>
#include <stdlib.h>

int* createArrayWithLen( char* type );
int* createArray( int len, char* type );


int* sortArray( int *pointer);

void showArray( int *pointer );

int main()
{

	int *ptr1 = createArray(7,"int");
	
	showArray(ptr1);
	
	int *ptr2 = sortArray(ptr1);
	
	showArray(ptr2);	
	
	
	
	
return 0;
}

int* createArrayWithLen( char* type ){
	int len;
	
	printf("Wpisz długość tworzonej tablicy: ");
	
	scanf("%d", &len);
	
	int *ptr = (int *) malloc((len + 1) * sizeof (int));
		
	*(ptr+0) = len;
		
	for(int i=1; i < (len+1) ;i++){
	
		scanf("%d",(ptr+i));
	
	}
	
	return ptr;
}

int* createArray( int len, char* type ){
		
	int *ptr = (int *) malloc((len + 1) * sizeof (int));
		
	*(ptr+0) = len;
		
	for(int i=1; i < (len+1) ;i++){
	
		scanf("%d",(ptr+i));
	
	}
	
	return ptr;
}

void showArray(int *ptr ){
	int len = *(ptr+0);
	for(int i=1;i<(len+1);i++){
	
		printf("%d ",*(ptr+i));
	
	}
	printf("\n\n");
}

int* sortArray( int *ptr ){
	int len = 4;
	int _ans[len+1];	
	int _c[len+1];
	_ans[_c[0]] = len;
	for(int i=1;i<(len+1);i++){
	
		
		for(int k=1;k<(len+1);k++){
		
			if (*(ptr+i) < *(ptr+k)) {
			
				_c[i]--;
	
			}

		}
		
		_ans[_c[i]] = *(ptr+i);
		
		
		showArray(_ans);
		
		/*			
		void _check(int l) {
			if (_ar[l]==0)
				{
					_ans[l]=*(ptr+i);
					_ar[l]=1;
				}
			else {
				_check(l+1);
			}
		}
		
		_check(_c[i]+1);*/
		
		
		

	
	}
	ptr = _ans;
	return ptr;

}












