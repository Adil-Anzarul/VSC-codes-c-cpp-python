#include <stdio.h>
void printstr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}

int main()
{
    char str[] = {'A', 'd', 'i', 'l', '\0'};
    char ar[] = "Adil Anzarul";
    /*
    The size of ar[] must be one greater than the input String.
    Compiler automatically add \0  at end when String is intut as "   "
    */
    printstr(str);
    printstr(ar);
    printf("Enter a string\n");
    char stra[34];
    gets(stra);
    /*
    Input String get saved automatically with null terminated character 
    */
    printf("\nUsing print : \n %s \n", stra);
    puts(stra);

    return 0;
}