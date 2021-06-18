#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of terms of fibonacci series u wanna print\n");
    scanf("%d", &n);
    int f[n];
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i < n; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }
    printf("The first %d terms of fibonacci series are\n", n);
    int c = 6;
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", f[i]);
        if (c % 5 == 0)
        {
            printf("\n");
        }
        c++;
    }

    return 0;
}
