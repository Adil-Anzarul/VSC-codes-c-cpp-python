#include <stdio.h>
void main()
{
    int a, b, pro = 1;
    printf("Enter base\n");
    scanf("%d", &a);
    printf("Enter power\n");
    scanf("%d", &b);
    if (b >= 0)
    {
        for (int i = 1; i <= b; i++)
        {
            pro = pro * a;
        }
        printf("%d raise to the power %d = %d", a, b, pro);
    }
    else if (b < 0)
    {
        b = b * (-1);
        for (int i = 1; i <= b; i++)
        {
            pro = pro * a;
        }
        float reciprocal = 1 / (float)pro;
        printf("%d raise to the power %d is %f", a, b, reciprocal);
    }
}