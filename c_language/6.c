//6
#include<stdio.h>
void main()
{
    printf("Armstrong number from 1 to 100\n");
    for(int i=1;i<=100;i++)
    {  int ar=0;
       int m=i;
        while(i!=0)
        {
          ar=ar+(i%10)*(i%10)*(i%10);
          i=i/10;
        }
        if(ar==m)
        {
            printf("%d\n",ar);
        }
    }
}