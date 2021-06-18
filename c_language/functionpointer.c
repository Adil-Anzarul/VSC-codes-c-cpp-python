#include <stdio.h>
#include <stdlib.h>
int sum(int a, int b)
{
    return a + b;
}
void print()
{
    printf("This program is created by Adil Anzarul");
}

int main()
{
    printf("The sum of 1 and 2 is %d \n", sum(1, 2));
    int (*p)(int, int);
    p = sum;            /*p=sum is also true*/
    int d = (*p)(4, 6); //int d=p(4,6); it also works.
    printf("The value of d is %d\n", d);

    return 0;
}