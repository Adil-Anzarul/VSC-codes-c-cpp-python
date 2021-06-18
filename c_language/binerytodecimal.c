#include <stdio.h>
void main()
{
    printf("Enter the no in binary number system i.e. base 2\n");
    int n;
    scanf("%d", &n);
    int sum = 0;
    int pro = 1;
    for (int i = 1; n != 0; i++)
    {
        for (int j = 0; j < i - 1; j++)
        {
            pro = pro * 2;
        }
        sum += (n % 10) * pro;
        pro = 1;
        n = n / 10;
    }
    printf(" Number in base 10 = %d\n", sum);
}