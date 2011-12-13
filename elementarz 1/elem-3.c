#include <stdio.h>
int main() {
   int tabela[] = {1, 2, 4, 6, 12};
   int i = sizeof(tabela)/sizeof(int);
   while (i>0){
   	i--;
	printf("%d ",tabela[i]);  
   }
   
   return 0;
}
