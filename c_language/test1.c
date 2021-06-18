#include <stdio.h>
int power(int i,int j)
{  int base=i;
    for(int k=1;k<j;k++)
    {
       base=base*i;
    }
    return base;
}
int fact(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}   
int main2()
{
   printf("Enter no. of terms\n");
   int n;
   scanf("%d",&n);
   float sum=0;
for(int i=0;i<=n;i++)
{
    sum+=(1.0*power(i,i)/fact(i));
}
printf("Required sum = %f\n",sum);
return 0;
}