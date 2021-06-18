#include <stdio.h>
void main()
{
    {
        int a = 34;
        int *ptra = &a;
        printf("%d\n", ptra);
        printf("%d\n", ptra + 1); //Add 1times size of integer
        printf("%d\n", ptra + 2); //Add 2times size of integer
        ptra++;
        printf("%d\n", ptra);
    }
    {
        char a = '3';
        char *ptrc = &a;
        printf("%d\n", ptrc);
        printf("%d\n", ptrc + 2); //Add 2times size of char
        printf("%d\n", ptrc - 2); //Sub 2times size of char
        ptrc--;
        printf("%d\n", ptrc);
    }
}

/*
#include<stdio.h>
void main()
{
int a=34;
int*ptra=&a;
printf("%d\n",ptra);
printf("%d\n",ptra+1);//Add 1times size of integer
printf("%d\n",ptra+2);//Add 2times size of integer
ptra++;
printf("%d\n",ptra);

    
char c='3';
char*ptrc=&a;
printf("%d\n",ptrc);
printf("%d\n",ptrc+2);//Add 2times size of char
printf("%d\n",ptrc-2);//Sub 2times size of char
ptrc--;
printf("%d\n",ptrc);
    
}
*/