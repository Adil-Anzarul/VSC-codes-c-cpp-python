#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void main()
{
    FILE *p = fopen("anzarul2.txt", "r");
    if (p == NULL)
    {
        printf("Cant open file\n");
        exit(0);
    }

    printf("Enter the word u wanna search\n");
    char str[15];
    gets(str);
    int freq=0;
    char v[15];
    //fscanf(p,"%s",v);
    
   while(fscanf(p,"%s",v)!=EOF)
   {
       if(strcmp(v,str)==0)
       {
           freq++;
       }
       //printf("%s\n",v);
   }
   //printf("%d",freq);
   if(freq==0)
   {
       printf("Word not found\n");
   }
   else if(freq!=0)
   {
       printf("Word found %d times\n",freq);
   }
}
