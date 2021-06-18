#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter marks of three subjects\n");
    scanf("%d%d%d", &a, &b, &c);
    printf("\nGrade:");
    int sum = a + b + c;
    if (sum < 150)
    {
        printf("\nF");
    }
    else if (sum < 200)
    {
        printf("\nC");
    }
    else if (sum < 250)
    {
        printf("\nB");
    }
    else if (sum < 270)
    {
        printf("\nA");
    }
    else if (sum >= 270)
    {
        printf("\n O");
    }
    return 0;
}
