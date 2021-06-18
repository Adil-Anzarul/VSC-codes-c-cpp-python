/* This program is gonna trim the trailing and leading spaces of a String*/
#include<stdio.h>
#include<string.h>
void trim_h(char * p)
{
    int posn=0;
    for(int i=0;*(p+i)==' ';i++)
    {
        posn+=1;
    }
    for(int i=0;*(p+i)!='\0';i++)
    {
      *(p+i)=*(p+i+posn);
    }

}
int main2(char * c)
{
 trim_h(c);
 c=strcpy(c,strrev(c));
  trim_h(c);
 c=strcpy(c,strrev(c));
   return 100;
}
