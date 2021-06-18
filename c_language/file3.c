#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *f1=fopen("anzarul1.txt","r");
    char c;
    c=fgetc(f1);
    while(c!=EOF)
    {
        printf("%c\n",c);
        c=fgetc(f1);
    }
}