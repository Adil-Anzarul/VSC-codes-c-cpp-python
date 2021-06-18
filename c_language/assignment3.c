#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of array u wanna create\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int pmax, pmin;
    int min = a[0];
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            pmax = i;
        }
        if (a[i] < min)
        {
            min = a[i];
            pmin = i;
        }
    }
    printf("The maximum value is %d and it first occurs at index no. %d \n", max, pmax);
    printf("The minimum value is %d and it first occurs at index no. %d\n", min, pmin);
    return 100;
}