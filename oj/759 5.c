#include<stdio.h>
#include<stdlib.h>
#define M 10    //m的最大值
int func();
int main()
{
    int m, i, j, temp1;
    scanf("%d", &m);
    if(m>M)
    {
        m = M;
    }
    int *a;
    a = (int *)malloc(m * sizeof(int));
    for (i = 0; i < m;i++)
    {
        a[i] = func();
    }
    for (i = 0; i < m-1;i++)
    {
        for (j = i + 1; j < m;j++)
        {
            if(a[i]<a[j])
            {
                temp1 = a[j];
                a[j] = a[i];
                a[i] = temp1;
            }
        }
    }
    for (i = 0; i < m;i++)
    {
        if(i==m-1)
        {
            printf("%d\n", a[i]);
        }
        else
        {
            printf("%d ", a[i]);
        }
    }
        free(a);
    return 0;
}
int func()
{
    int n;
    int *arr, i, j, temp;
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 3;i++)
    {
        for (j = i+1; j < n;j++)
        {
            if(arr[i]<arr[j])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    } 
    return arr[2];
    free(arr);
}