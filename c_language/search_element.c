#include <stdio.h>
int main()
{
    int n, indicator = 0;
    printf("Enter size of 1-D Array u wanna create\n");
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element at %d index\n", i);
        scanf("%d", &array[i]);
    }
    printf("Enter element u wanna search\n");
    int f;
    scanf("%d", &f);
    for (int i = 0; i < n; i++)
    {
        if (array[i] == f)
        {
            printf("It is found at index no. %d\n", i);
            indicator = 1;
        }
    }
    if (indicator == 0)
        printf("NOT FOUND\n");

    return 0;
}
