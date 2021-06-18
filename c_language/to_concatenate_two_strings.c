#include <stdio.h>
int main()
{
    printf("Enter  string1\n");
    char s1[100], s2[100];
    gets(s1);
    printf("Enter  string2\n");
    gets(s2);
    int l1, l2;
    for (l1 = 0; s1[l1] != '\0'; l1++);
    for (l2 = 0; s2[l2] != '\0'; l2++);
    //printf("%d %d ",l1,l2);
    for (int i= 0; s1[i ] != '\0'; i++)
    {
        s2[l2 + i] = s1[i];
    }
    s2[l1+l2]='\0';
    printf("The concatenated string is \n");
    puts(s2);
    return 0;
}