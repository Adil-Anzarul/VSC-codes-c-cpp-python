#include <stdio.h>
int main()
{
    int arr[10];
    printf("Enter 10 elements of array\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("******************Printing array in forward dirn******************\n");
    for (int i = 0; i < 10; i++)
    {
        printf(" The element at index %d  of array is %d\n", i, arr[i]);
    }
    printf("******************Printing array in reverse dirn******************\n");
    for (int i = 9; i >= 0; i--)
    {
        printf(" The element at index %d  of array is %d\n", i, arr[i]);
    }
    return 0;
}