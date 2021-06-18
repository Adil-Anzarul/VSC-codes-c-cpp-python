#include <stdio.h>
#include <stdlib.h>
void main()
{
    FILE *p = fopen("anzarul2.txt", "r");
    if (p == NULL)
    {
        printf("Cant open file\n");
        exit(0);
    }
    char n;
    printf("Enter the character u wanna search\n");
    scanf("%c", &n);

    int f = 0;
    char c = fgetc(p);
    while (c != EOF)
    {
        if (c == n)
        {
            f++;
        }
        c = fgetc(p);
    }
    // printf("%d",f);

    if (f == 0)
        printf("Character %c not found\n", n);
    else if (f != 0)
        printf("Character %c is found %d times\n", n, f);
}
