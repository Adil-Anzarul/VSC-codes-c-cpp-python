#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter the size of Matrix1\n");
    scanf("%d%d", &a, &b);
    int arr1[a][b];
    printf("Enter the elements of Matrix 1\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; i < b; j++)
        {
            scanf("%d", &(arr1[i][j]));
        }
    }
    printf("Enter the size of Matrix2\n");
    scanf("%d%d", &c, &d);
    int arr2[c][d];
    printf("Enter the elements of Matrix 2\n");
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; i < d; j++)
        {
            scanf("%d", &(arr2[i][j]));
        }
    }

    if (a == c && b == d)
    {
        printf("Addition is possible\n");

        int add[a][b];
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {

                add[i][j] = arr1[i][j] + arr2[i][j];
            }
        }
        printf("The required addition is\n");
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                printf("%d", &add[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("addition not possible\n");
    }

    return 0;
}
