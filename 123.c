#include<stdio.h>
#include<string.h>
struct student
{
    int no;
    char name[20];
    char major[20];
    float score;
};
int main()
{
    struct student xm = {12, "xiaoming", "cs", 95}, *p;
    p = &xm;
    puts(xm.name);
    puts((*p).name);
    puts(p->name);
    puts(p->major);
    printf("%d %f", p->no, p->score);
    return 0;
}