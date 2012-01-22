#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void square(int w,int h);

void scircle(int r);

int main(){
	
	square(8,8);
	scircle(4);
	return 0;
} 

void square(int w,int h){

	for(int i = 0; i<h;i++){
	
		if ( i==0 || i==h-1 ){
		
			for(int x = 0; x<w; x++){
			
				putchar('*');
			
			}			
			putchar(10);
		}
		
		else {
		
			for(int x = 0; x<w; x++){
				if ( x==0 || x==w-1 ){
					putchar('*');
				} else {
					putchar(' ');
				}
 			}			
			putchar(10);
		}
	
	}

}

void scircle(int r){

	for( int i = 0 ; i <= r ; i++ ){
		for(int x = 0; x <= 2*r; x++){ 
			if ((x == r-i)||(x == r+i)) {putchar('*');}else{putchar(' ');}
		}
		putchar(10);
	}
	for( int i = r ; i >= 0 ; i-- ){
		for(int x = 0; x <= 2*r; x++){ 
			if ((x == r-i)||(x == r+i)) {putchar('*');}else{putchar(' ');}
		}
		putchar(10);
	}
}
