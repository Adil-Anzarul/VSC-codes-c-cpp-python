/*  This programme will reverse array*/

#include <stdio.h>
/*
void arrRev(int a[])
{
   int temp[9];
   for(int i=0;i<9;i++)
   {

       temp[i]=a[8-i];
   }
   for(int i=0;i<9;i++)
   {

       a[i]=temp[i];
   }

}
*/
void arrRev(int a[])
{
    int temp;
    for (int i = 0; i <= 8 / 2; i++)
    {
        temp = a[i];
        a[i] = a[8 - i];
        a[8 - i] = temp;
    }
}
void main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 0; i < 9; i++)
    {
        printf(" %d ", arr[i]);
    }
    arrRev(arr);
    printf("\n");
    for (int i = 0; i < 9; i++)
    {
        printf(" %d ", arr[i]);
    }
}