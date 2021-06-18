#include <stdio.h>
int main()
{
    printf("Enter a String\n");
    char s1[100];
    gets(s1);
    int len;
    for (len = 0; s1[len] != '\0'; len++);
    int indicator = 0;
    for (int i = 0; i < len / 2; i++)
    {
        if (s1[i] != s1[len - i-1])
        {
            indicator = 1;
            break;
        }
    }
    if (indicator == 0)
    {
        printf("It is palindrome");
    }
    else if (indicator == 1)
    {
        printf("It is not palindrome");
    }
    return 0;
}