#include<stdio.h>
#include<string.h>
#define N 8
#define PEO 3
struct vote
{
    char name[20];
    int votes;
};
int main()
{
    int c, l;
    char temp[20];
    struct vote condi[3]={{"w",0},{"m",0},{"c",0},},temp;
    for (int i = 0; i < 8;i++)
    {
        gets(temp);
        for (int i = 0; i < PEO; i++)
        {
            if(strcmp(temp,condi[i].name)==0)
            {
                condi[i].votes++;
                break;
            }
        }
    }
    
    return 0;
}