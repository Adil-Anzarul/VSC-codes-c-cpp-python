#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter a number\n");
    scanf("%d", &n);
    m = n;
    int sum = 0;
    for (int i = n; n > 0; n = n / 10)
    {
        sum = sum + (n % 10);
    }
    printf("Sum of digit of %d  is= %d", m, sum);
    return 0;
}