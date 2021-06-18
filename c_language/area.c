#include <stdio.h>
#include <math.h>

float Edistance(int x1, int x2, int y1, int y2)
{
    float a = ((y2 - y1) * (y2 - y1) + (x2 - x1) * (x2 - x1));
    return sqrt(a);
}
float areaOfCircle(int x1, int x2, int y1, int y2, float (*Distance)(int x1, int x2, int y1, int y2))
{
    return 3.14 * Distance(x1, x2, y1, y2) * Distance(x1, x2, y1, y2);
}
int main()
{
    int x1, x2, y1, y2;
    printf("Enter x1: ");
    scanf("%d", &x1);
    printf("Enter x2: ");
    scanf("%d", &x2);
    printf("Enter y1: ");
    scanf("%d", &y1);
    printf("Enter y2: ");
    scanf("%d", &y2);
    printf("Distance b/w two points is:\n");
    printf("%f\n", Edistance(x1, x2, y1, y2));
    areaOfCircle(x1, x2, y1, y2, Edistance);
    float f = areaOfCircle(x1, x2, y1, y2, Edistance);
    printf("Area of circle is :\n");
    printf("%f", f);
}
