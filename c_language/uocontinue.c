#include<stdio.h>
int main()
{
int i=0,j=0;
for(i=0;i<=10;i++)
{
printf("Enter a no.\n");
scanf("\n %d",&j);
if (j%5==0)
{
    printf(" %d is divisible by 5\n",j);
continue;
}
printf("%d is not divided by 5\n",j);
}
return 0;
}