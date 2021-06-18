#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    printf("Enter the size of array\n");
    int n;
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int min, posn;
    for (int i = 0; i < n; i++)
    {
        min = arr[i];
        for (int j = i; j < n; j++)
        {
            if (min >= arr[j])
            {
                min = arr[j];
                posn = j;
            }
        }
        if (posn != i)
        {
            swap(&arr[i], &arr[posn]);
        }
    }
    printf("Array after sorting\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}

/*
Anzarul method
*/

/*
#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    printf("Enter the size of array\n");
    int n;
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int min, posn;
    for (int i = 0; i < n; i++)
    {
        min = arr[i];
        for (int j = i; j < n; j++)
        {
            if (min >= arr[j])
            {
                min = arr[j];
                posn = j;
            }
        }
        if (posn != i)
        {
            swap(&arr[i], &arr[posn]);
        }
    }
    printf("Array after sorting\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}



/*
Anzarul method
  
*/