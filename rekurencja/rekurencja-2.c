#include <stdio.h>


int newton(int n,int k);

int main(){
    int n, k;
    printf("Input a n and k:");
    scanf("%d %d", &n, &k);
    
    printf("%d\n", newton(n, k));
    return 0;
}

int newton(int n,int k){
	if ((k == n)||(k == 0)) {
    	return 1;
    } else if ((0 < k)&&(k < n)) {
 		return newton(n-1,k-1) + newton(n-1,k);
    } else {
		return -1;    
    }

}
