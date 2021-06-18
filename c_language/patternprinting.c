/* this program 
                will print star 
                               pattern at middle
                                              of console */
#include <stdio.h>
int main()
{
    printf("Enter no of rows\n");
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++) // for printing space
        {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++) // for printing star pattern
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}