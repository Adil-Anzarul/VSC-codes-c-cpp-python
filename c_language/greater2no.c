/*using  ternary operator find the greatest one among two numbers*/
#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter to number.\n");
    scanf("%d%d",&a,&b);
    (a>b)?printf("\n%d",a):printf("\n%d",b);
}