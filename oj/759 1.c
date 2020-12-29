#include <stdio.h>
#define N 20    //案例数
int main()
{
    int arr[20]={0},i;
    for (i = 0; i < N ;i++)
    {
        scanf("%d", &arr[i]);
        while(arr[i]==0)
        {
            if(getchar()=='\n')
            {
                i = N;
                break;
            }
        }
    }
    for (i = 0; i < N;i++)
    {
            if(arr[i]==0)
            {
                break;
            }
            else if(arr[i]%2==0)
            {
                printf("Black Horse!");
            }
            else
            {
                printf("White Horse, Bye!\n");
            }
    }
    return 0;
}