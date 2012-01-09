#include <stdio.h>


int ntok(int n, int k);

int main()
{

    int n, k;
    printf("Input a n and k:");
    scanf("%d %d", &n, &k);
    printf("%d", ntok(n, k));
    return 0;
}

int ntok(int n, int k)
{
    if (k > 0) {
		return ntok(n, k - 1) * n;
    } else if (k < 0) {
		return ntok(n, k + 1) / n;
    }

    return 1;
    

}
