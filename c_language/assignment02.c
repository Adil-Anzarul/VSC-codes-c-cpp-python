/*
This programme  is written by
Adil Anzarul
*/
#include <stdio.h>
void compare()
{
    int a, b;
    printf("Enter two number\n");
    scanf("%d\n", &a);
    scanf("%d", &b);
    if (a > b)
        printf("%d is greater\n", a);
    else if (b > a)
        printf("%d is greater\n", b);
    else
        printf("both are equal\n");
}
void comparetozero()
{
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);
    if (a > 0)
        printf("it is positive\n");
    else if (a < 0)
        printf("it is negetive\n");
}
void oddeven()
{
    int a;
    printf("Enter a no\n");
    scanf("%d", &a);
    if (a % 2 == 0)
        printf("%d is even\n", a);
    else if (a % 2 != 0)
        printf("%d is odd\n ", a);
}
void leapyear()
{
    int year;
    printf("Enter an year\n");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        printf("It is leap year");
    }
    else
    {
        printf("it isnot a leap year\n");
    }
}
void greater()
{
    int a, b, c;
    printf("Enter 3 numbers\n");
    scanf("%d\n%d\n%d", &a, &b, &c);
    if (a > b && a > c)
        printf("%d is greater\n", a);
    else if (b > a && b > c)
        printf("%d is greater\n", b);
    else if (c > a && c > b)
        printf("%d is greater\n", c);
}

int main()
{
    int c = 0;
    printf("Press 1 : To compare two integers\n");
    printf("Press 2 : To find weather a no. is +ve or -ve\n");
    printf("Press 3 : To find weather a no. is odd or even\n");
    printf("Press 4 : To check weather an year is leap year or not\n");
    printf("Press 5 : To find larger no. among 3 no.s\n");
    printf("Press 100 : To EXIT\n");
    while (1) /* while(1){} is always true  */
    {
        scanf("%d", &c);
        if (c == 1)
        {
            compare();
        }
        else if (c == 2)
        {
            comparetozero();
        }
        else if (c == 3)
        {
            oddeven();
        }
        else if (c == 4)
        {
            leapyear();
        }
        else if (c == 5)
        {
            greater();
        }
        if (c == 100)
        {
            goto Adil_Anzarul;
        }
    }
Adil_Anzarul:
    return 0;
}