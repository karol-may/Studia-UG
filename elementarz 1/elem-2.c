#include <stdio.h>
int main() {
   int tabela[] = {1, 2, 4, 6, 12};
   int i;
   printf ("%d\n",sizeof(tabela)/sizeof(int));
   for (i = 5-1;i>=0;i--){
	printf("%d ",tabela[i]);  
   }
   
   return 0;
}
