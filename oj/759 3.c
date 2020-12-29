#include<stdio.h>
void func(int n);
int main()
{
    int n,x;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d", &x);
        func(x);
        printf("\n");
    }
    return 0;
}
void func(int x)
{
    int bai, shi, ge, i, count = 0;
    for (i = 100; i <= x;i++)
    {
        bai = i / 100;
        shi = (i - bai * 100) / 10;
        ge = i % 10;
        if(bai*bai*bai+shi*shi*shi+ge*ge*ge==i)
        {
            count++;
            if(count==1)
            {
                printf("%d", i);
            }
            else
            {
                printf(" %d", i);
            }
        }
    }
}