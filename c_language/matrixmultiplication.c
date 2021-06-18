/*61*/
#include <stdio.h>
void main()
{
    int sum = 0;
    int a, b, c, d;
    printf("Enter the size of matrix 1(nXm)\n");
    scanf("%d%d", &a, &b);
    int e[a][b];
    printf("Enter the elements of matrix 1(nXm)\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &e[i][j]);
        }
    }
    printf("Enter the size of matrix2 (pXq)\n");
    scanf("%d%d", &c, &d);
    int f[c][d];
    printf("Enter the elements of matrix 2(pXq)\n");
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < d; j++)
        {
            scanf("%d", &f[i][j]);
        }
    }

    if (b != c)
    {
        printf("Multiplication is not possible\n");
    }
    if (b == c)
    {
        int m[a][d];
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < d; j++)
            {
                for (int k = 0; k < b; k++)
                {
                    sum += e[i][k] * f[k][i];
                }
                m[i][j] = sum;
                sum = 0;
            }
        }

        printf("The resulted matrix is \n");
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < d; j++)
            {
                printf("%d\t", m[i][j]);
            }
            printf("\n");
        }
    }
}