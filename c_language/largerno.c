/*
using ternary operator find the largest number amog three number
*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    int m=((a>b)&&(a>c))?a:(((b>a)&&(b>c))?b:c);
    printf("Larger among %d ,%d and %d =\n%d",a,b,c,m);
    return 0;
}