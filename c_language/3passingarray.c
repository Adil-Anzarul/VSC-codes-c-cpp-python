#include<stdio.h>
void show(int a[],int n)
{  
    printf("The elements of array are\n");
for (int i=0;i<n;i++)
{
    printf("%d \t",a[i]);
}
}
void main()
{
   int arr[]={1,2,3,4,5};
   show(arr,5);
}