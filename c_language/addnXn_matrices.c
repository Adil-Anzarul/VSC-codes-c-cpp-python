#include<stdio.h>
void main()
{
    int n;
    printf("Enter the size of n X n sq. matrix\n");
    scanf("%d",&n);
    int a[n][n];
    int b[n][n];
    printf("Enter the elements of matrix1\n");
    for(int i=0;i<n;i++)
    {
        for (int j = 0; j< n; j++)
        {
            scanf("%d",&(a[i][j]));
        }

    }
     printf("Enter the elements of matrix2\n");
    for(int i=0;i<n;i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&(b[i][j]));
        }

    }
    int add[n][n];
    for(int i=0;i<n;i++)
    {
        for (int j = 0; j< n; j++)
        {
            add[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("The required array is \n");
    for(int i=0;i<n;i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t",add[i][j]);
        }
        printf("\n");
    }
}
