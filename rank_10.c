#include<stdio.h>
void soft(int *a);
int main()
{
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }  
    soft(a);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
void soft(int *a)
{
    int i, j,temp;
    for (i = 0; i < 9;i++)
    {
        for (j = 0; j < 9 - i;j++)
        {
            if(a[j]<a[j+1])
            {
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
}