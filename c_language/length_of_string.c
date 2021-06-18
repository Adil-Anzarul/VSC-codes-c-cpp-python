#include <stdio.h>
int main()
{
    int i;
    int len = 0;
    printf("Enter a String\n");
    char s[100];
    gets(s);
    for (i = 0; s[i] != '\0'; i++)
    {
        len += 1;
    }
    printf("The length of entered String is  %d ", len);
    return 0;
}