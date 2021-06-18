#include <stdio.h>
int main()
{
    int n, num = 0, rev = 0, flag = 0;
    printf("Enter the no. in base 10\n");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        n++;
        flag = 1;
    }
    while (n != 0)
    {
        num = num * 10 + (n % 2);
        n = n / 2;
    }

    while (num != 0)
    {
        rev = rev * 10 + (num % 10);
        num = num / 10;
    }
    if (flag == 1)
    {
        rev--;
    }
    printf("Number in base 2 is = %d\n", rev);
}