#include<stdio.h>
struct book
{
    char name[20];
    int id;
    struct date time;
};
struct date
{
    int year;
    int month;
    int day;
};
int main()
{
    struct book bk;
    bk.time.year = 5555;
    printf("%d", bk.time.year);
    return 0;
}