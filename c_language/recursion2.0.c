#include <stdio.h>

int fib_recursive(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    else
    {
        return fib_recursive(n - 1) + fib_recursive(n - 2);
    }
}

int fib_iterative(int n)
{
    int a = 0;
    int b = 1;
    for (int i = 0; i < n - 1; i++)
    {
        b = a + b;
        a = b - a;
    }
    return a;
}

void main()
{
    int n;
    printf("Enerthe index to get fibonacci series \n");
    scanf("\n%d", &n);
    printf("The value of fibonacci number at posn no. %d using iterative approch is %d", n, fib_iterative(n));
    printf("\nThe value of fibonacci number at posn no. %d using recusive approch is %d", n, fib_recursive(n));
}