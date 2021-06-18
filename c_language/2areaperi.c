#include<stdio.h>
float area(float r)
{
    return 3.14*r*r;
}
float perimeter(float r)
{
    return 2*3.14*r;
}
void main()
{
    printf("Enter the value of radius of circle\n");
    float r;
    scanf("%f",& r);
    printf("The area of circle is = %f sq. units\n",area(r));
    printf("The perimeter of circle is = %f units\n",perimeter(r));
}