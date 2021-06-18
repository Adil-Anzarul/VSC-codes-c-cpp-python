#include <stdio.h>
int main()
{
    FILE *p = NULL;
    char string[34];
    p = fopen("adil.txt", "r");
    fscanf(p, "%s", string);
    printf("The content of this file has %s\n", string);
    p = fopen("adil.txt", "w");
    fprintf(p, "%s", "hellow world this is Adil Anzarul");
    fclose(p);
    return 0;
}