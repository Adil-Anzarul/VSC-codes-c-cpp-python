//5
#include<stdio.h>
void main()
{
    printf("Enter a number\n");
    int n;
    scanf("%d",&n);
    int rev=0;
    while(n)
    {
        rev=rev*10+(n%10);
        n=n/10;
    }
    printf("Reverse is ---- %d",rev);
}