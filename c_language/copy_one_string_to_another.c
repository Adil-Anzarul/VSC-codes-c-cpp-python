#include<stdio.h>
int main()
{   int i;
    printf("Enter a string\n");
    char s1[100];
    char s2[100];
    gets(s1);
    for(i=0;s1[i]!='\0';i++)
    {
        s2[i]=s1[i];
    }
    s2[i]='\0';
    printf("Copied String is----- \n");
    puts(s2);
    return 0;
}