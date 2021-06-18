#include <stdio.h>
void bubbleSort(int *a, int n)
{
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = *(a + i);
    }
    int temp;
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
    printf("\nAfter sorting by bubble sort method\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}

void insertionSort(int *a, int n)
{
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = *(a + i);
    }
    int temp, j;
    for (int i = 1; i < n; i++)
    {
        temp = arr[i];
        j = i - 1;
        while (temp < a[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
    printf("\nAfter sorting by insertion sort method\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}
void selectionSort(int *a, int n)
{
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = *(a + i);
    }
    int temp;
    for (int i = 0; i < n - 1; i++)
    {

        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])    /**/
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nAfter sorting by selection sort method\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}
void main()
{
    int n;
    printf("Enter the size of array you want to create\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d elements of array\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The value before sorting is\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    //bubbleSort(&a[0], n);
    //insertionSort(&a[0], n);
    selectionSort(&a[0], n);
}