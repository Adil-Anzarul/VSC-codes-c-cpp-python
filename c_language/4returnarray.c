#include<stdio.h>
char* fxn_arr()
{
    static char arr[]={'a','e','i','o','u'};
    return arr;
}
void main()
{  char*p=fxn_arr();
 for(int i=0;i<5;i++)
 {
     printf("%c\t",*(p+i));
 }
}