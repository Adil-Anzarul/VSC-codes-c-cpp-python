#include<stdio.h>
void leapyear()
{   
    printf("Enter a year\n");
    int n;
    scanf("%d",&n);
    if(n%100!=0)
    {
        if(n%4==0)
        {
            printf("%d is leapyear\n",n);
        }
    }
    else if(n%100==0)
    {
        if(n%400==0)
        {
            printf("%d is leapyear\n",n);
        }
    }
    else 
       {
           printf("%d is not a leapyear\n",n);
       }
}
void main()
{
    leapyear();
}