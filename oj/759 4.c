#include<stdio.h>
void func(char ch[]);
void putfunc(char ch[]);
int main()
{
    int n;
    char ch[80];
    scanf("%d", &n);
    printf("%p\n",ch); 
    while(n--)
    {
        printf("%d",n);//测试有没有进入while 
        gets(ch);//为什么进入了while 不调用gets()函数
        func(ch);
        putfunc(ch);
    }
    return 0;
}
void func(char ch[])
{
    char *p;
    p = ch;
    for (; *p != '\0';p++)
    {
        if (*p >= 'a' && *p <= 'z')
        {
            *p -= 32;
        }
    }
}
void putfunc(char ch[])
{
    char *p;
    p = ch;
    for (; *p != '\0';p++)
    {
        if (*p >= 'A' && *p <= 'Z')
        {
            printf("%c", *p);
        }
    }
    printf("\n");
}