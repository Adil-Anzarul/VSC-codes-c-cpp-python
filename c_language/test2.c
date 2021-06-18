/*
#include<stdio.h>
void fact()
{   int a;
     printf("Enter a number to find Factorial\n");
     scanf("%d",&a);
    int pro=1;
    for(int i=1;i<=a;i++)
    {
        pro=pro*i;
    }
printf("Factorial %d = %d\n",a,pro);
}

void sumofdigit()
{   int a;
printf("Enter a number to find sum of digit\n");
scanf("%d",&a);
    int sum=0;
    while(a)
    {

        sum=sum+(a%10);
        a=a/10;
    }
printf("Sum of Digits =%d\n",sum);
}

void main()
{
    int r;
    printf("Press 1 for Factorial\nPress 2 for finding sum f digit\n");
    scanf("%d",&r);
    switch (r)
    {
    case 1:
       fact();
       break;
    case 2:
        sumofdigit();
        break;
    default:
    printf("Enter a valid number\n");
    }

}
*/
