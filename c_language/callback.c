#include <stdio.h>
#include <stdlib.h>
int sum(int a, int b)
{
    return a + b;
}
void greetHellow(int (*p)(int, int))
{
    printf("Hellow user\n");
    printf("Sum = %d\n", p(5, 7));
}
void greetGm(int (*p)(int, int))
{
    printf("Good Morning user\n");
    printf("Sum = %d\n", (*p)(5, 7));
}

int main()
{
    int (*ptr)(int, int);
    ptr = sum;
    greetGm(ptr);
    greetHellow(ptr);

    return 0;
}