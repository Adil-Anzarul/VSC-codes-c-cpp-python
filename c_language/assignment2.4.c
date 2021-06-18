//To find weather an year is leap year or not
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
if((n%4==0 && n%100!=0) || n%400==0)
{
    printf("It is leap year");
}
else
{
    printf("It is not a leapyear");
}
    return 0;
}