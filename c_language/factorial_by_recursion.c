#include <stdio.h>
int factorial(int num)
{
    if (num == 1 || num == 0)
    {
        return 1;
    }
    else
    {
        return (num * factorial(num - 1));
    }
}

int main()
{
    int num;
    printf("Enter the number you want factorial of \n");
    scanf("%d", &num);
    printf("The facorial of %d is %d \n", num, factorial(num));
    return 0;
}
