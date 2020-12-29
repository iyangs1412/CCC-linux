#include<stdio.h>
#define N 19
int main()
{
    int i, j, n;
    scanf("%d", &n);
    if(n>N)
    {
        n = N;
    }
    for (i = 1; i <=n ;i++)
    {
        for (j = n; j > i; j--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
        return 0;
}