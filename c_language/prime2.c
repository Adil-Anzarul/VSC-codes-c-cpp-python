//wap to print prime no. within given range
#include <stdio.h>
int main()
{
int m,n;
printf("You want to print prime no from m to n\n");
printf("Enter m\n");
scanf("%d",&m);
printf("Enter n\n");
scanf("%d",&n);
if(m==1)
{
    m=m+1;
}
for(int i=m;i<=n;i++)
{
    int flag=0;
for(int j=2;j<=i/2;j++)
{
if(i%j==0)
{
flag=1;
break;
}
}
if(flag==0)
printf("%d is prime\n",i);
}
return 0;
}
