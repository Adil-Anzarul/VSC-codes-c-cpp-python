#include<stdio.h>
#define cube(x)  x*x*x
int main()
{   printf("Enter a number\n");
    float n;
    scanf("%f",&n);
    float a= cube(n);
    printf("Th cube of %f is %f",n,a);
    return 0;
}