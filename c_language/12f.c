#include<stdio.h>
# define area(r) 3.14*r*r
void main()
{
    printf("Enter radius of circle :\n");
    int a;
    scanf("%d",&a);
    float b=area(a);
    printf("The required area is %f",b);
}