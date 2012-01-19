#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
  FILE *in_handle;
  unsigned int ui;
  in_handle = fopen(argv[1], "r");
  /*
  42= '*'
  45 = '-'
  47 ='/'
  
  8 = '\b'
  10 = '\n'
  */
  
  int wart = 0;
  
  while ((ui = fgetc(in_handle)) != EOF) {
    	
  	//printf(" [ %i ->",wart);
  		
	// wykrywanie początku komentarza /* i //
	if (wart == 0) { 
		if (ui == 47) {wart = 1;}
		else {
			putchar(ui); // przepisywanie pozostałych znaków
		}
	}
  			
  	else if (wart == 1) {
  		if (ui == 42) {wart = 3;}
  		else if (ui == 47) {wart = 11;}
  		else {
	  		putchar(47);
			putchar(ui);
			wart = 0;
  		}  		
  	}
  	
  	// wykrywanie końca komentarza /* */ flaga bitowa 3  	
  	else if (wart == 3) {
  		if (ui == 42) {wart = 5;}
  		
  	}
  	
   	// wykrywanie końca komentarza /* */ flaga bitowa 5 	
  	else if (wart == 5) {
  		if (ui == 47) {wart = 7;} 
  		else {
			wart = 3;
  		}
  	}
  	
   	// wykrywanie i usuwanie końca linii na końcu komentarza /* */\7 flaga bitowa 7 	
  	else if (wart == 7) {
  		if (ui == 10) {wart = 0;} else { putchar(ui); }
  	}
  	
   	// wykrywanie końca komentarza // \n flaga bitowa 11   	
  	else if (wart == 11) {
 		if (ui == 10) {wart = 0;}  		
  	}	
  	
  	

  	//printf("|%c<- %i ]\n",putchar(ui),wart);
  }
  putchar(10);
  fclose(in_handle);
  return EXIT_SUCCESS;
}
