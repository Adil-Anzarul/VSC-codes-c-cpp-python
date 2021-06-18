#include <stdio.h>
void main()
{
    printf("Enter the size of array\n");
    int n;
    scanf("%d", &n);
    int a[n];
    int temp;
    printf("Enter the  %d elements of array \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    /*  Bubble sort  */
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("Array after sorting\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
}