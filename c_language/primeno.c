#include<stdio.h>
int main1()
{
int i, flag=0;
int j;
printf("Enter a number\n");
scanf("\n %d",&j); 
for(i=2;i<=j/2;i++)
{
if(j%i==0)
{
flag=1;
break;
}
}
if (flag==0)
{       
printf("it is prime no.\n");
}
else
{
    printf("it is not prime\n");
    flag=0;
}

return 0; 
}