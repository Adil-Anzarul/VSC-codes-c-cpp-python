#include <stdio.h>
void main()
{
    int n;
    printf("Enter the size of array\n");
    scanf("%d", &n);
    int a[n], b[n];
    printf("Enter %d elements of array A\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        b[i] = 2 * a[i];
    }
    printf("The elements of array B\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", b[i]);
    }
}