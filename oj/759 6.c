#include<stdio.h>
int main()
{
    int n, x;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d", &x);
        if(x%3==0)
        {
            printf("%d\n", x * x);
        }
        else 
        {
            printf("%d\n", 3 * x);
        }
    }
    return 0;
}