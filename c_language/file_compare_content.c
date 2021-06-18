//WAP to compare the content of two file and determine weather they are same or not.
#include<stdio.h>
#include<stdlib.h>
void main()
{   int ind=0;
    FILE *p1,*p2;
    p1=fopen("anzarul1.txt","r");
    p2=fopen("adil.txt","r");
    char c1,c2;
    c1=fgetc(p1);
    c2=fgetc(p2);
    while((c1 != EOF)||(c2!=EOF))
    {
        if(c1!=c2)
        {
            ind =1;
            break;
        }
    c1=fgetc(p1);
    c2=fgetc(p2);
    }
    fclose(p1);
    fclose(p2);
    if(ind==0)
    printf("Content is same\n");
    else if(ind ==1)
    printf("Content is not same\n");

}