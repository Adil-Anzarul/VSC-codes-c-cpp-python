#include <stdio.h>
int main()
{
    printf("printing odd numbers from 30 to 50\n");
    for (int i = 30; i <= 50; i++)
    {
        if (i % 2 != 0)
            printf("%d\n", i);
    }
    return 0;
}