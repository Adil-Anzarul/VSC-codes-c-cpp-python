#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *p1,*p2;
    p1=fopen("anzarul1.txt","r");
    p2=fopen("anzarul3.txt","w");
    if(p1==NULL)
    {
        printf("Can't open file1\n");
        exit(0);
    }
    if(p2==NULL)
    {
        printf("Can't open file2\n");
        exit(0);
    }
    char c;
    c=fgetc(p1);
    while(c!=EOF)
    {
      fputc(c,p2);
      c=fgetc(p1);
    }
    printf("Content is copied sucessfully\n");
    fclose(p1);
    fclose(p2);
    return 0;
}