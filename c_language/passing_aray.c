#include <stdio.h>

int func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, array[i]);
    }
    array[0] = 382; /* Changed value get reflected in main function*/
    return 0;
}

int func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, ptr[i]);
        printf("The value at %d is %d\n", i, *(ptr + i));
    }
    *(ptr + 2) = 6534;
    return 0;
}

void func3(int arr[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value at %d ,%d is %d\n", i, j, arr[i][j]);
        }
    }
}

int main()
{
    int arr[] = {23, 13, 4, 3};
    printf("The value at index 0 s %d\n", arr[0]);
    func1(arr);
    printf("The value at index 0 s %d\n", arr[0]);
    func2(arr);
    func2(arr);
    int carnot[][2] = {{2, 13}, {9, 3}};
    func3(carnot);
    return 0;
}