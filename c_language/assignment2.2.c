//To check weather a given number is positive or negative
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    if(a>0)
    {
    printf("It is positive");
    }
    else if(a<0)
    {
    printf("It is negative");
    }
    return 0;
}