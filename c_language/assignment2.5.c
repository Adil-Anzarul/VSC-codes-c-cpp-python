// To find larger no. among 3 numbers
#include <stdio.h>
void main()
{
    int a, b, c;
    printf("Enter  Three numbers");
    scanf("%d \n %d \n %d", &a, &b, &c);
    if (a > b && a > c)
        printf("%d is greater\n", a);
    else if (b > a && b > c)
        printf("%d is greater\n", b);
    else if (c > a && c > b)
        printf("%d is greater\n", c);
}