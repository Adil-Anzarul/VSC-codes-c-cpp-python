#include <stdio.h>
void main()
{
    printf("This program will print sum of first n numbers\n");
    printf("Enter n\n");
    int n;
    scanf("%d", &n);
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("Sum of first n numbers = %d", sum);
}