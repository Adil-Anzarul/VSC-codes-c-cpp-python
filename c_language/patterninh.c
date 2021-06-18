#include <stdio.h>
void main3()
{

    printf("Enter number of rows\n");
    int n;
    scanf("%d", &n);
    {
        printf("Pattern 1 ----------------------------\n");
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }

    {
        printf("Pattern 2--------------------------------\n");
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n - i; j++)
            {
                printf("  ");
            }
            for (int k = 1; k <= i; k++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    {
        printf("Pattern 3---------------------------------\n");
        for (int i = n; i; i--)
        {
            for (int j = 1; j <= n - i; j++)
            {
                printf("  ");
            }
            for (int k = 1; k <= i; k++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    {
        n = n + 2;
        printf("Pattern 4----------------------------------\n");
        {
            for (int i = 1; i <= (n / 2) - 1; i++)
            {
                for (int j = 1; j <= n / 2 - i; j++)
                {
                    printf("  ");
                }
                for (int k = 1; k <= 2 * i - 1; k++)
                {
                    printf("* ");
                }
                printf("\n");
            }
        }
        for (int i = n / 2; i; i--)
        {
            for (int j = 1; j <= n / 2 - i; j++)
            {
                printf("  ");
            }
            for (int k = 1; k <= 2 * i - 1; k++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
}