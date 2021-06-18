//3
#include<stdio.h>
void main()
{
    printf("Enter number of term\n");
    int n;
    scanf("%d",&n);
    int a[n];
    a[0]=0;
    a[1]=1;
    for(int i=2;i<n;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    printf("the fib. series is-----\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }

}