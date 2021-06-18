#include<stdio.h>
struct ph
{
    int ph1;
    int ph2;
};
struct stud
{
    char name[20];
    struct ph p;
};
void main()
{
    struct stud s;
    printf("\nenter information about student\n");
    scanf("%s%d%d",s.name,&s.p.ph1,&s.p.ph2);
    printf("\nthe information is \n");
    printf("%s  %d  %d  ",s.name,s.p.ph1,s.p.ph2);

}