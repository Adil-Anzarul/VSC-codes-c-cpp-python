#include <stdio.h>
void main()
{
    int arr[40];
    arr[0]=0;
    arr[1]=1;
    for(int i=2;i<40;i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }
    for(int i=0;i<40;i++)
    {
     printf(" Term no. %d is= %d\n",i+1,arr[i]);
    }
}