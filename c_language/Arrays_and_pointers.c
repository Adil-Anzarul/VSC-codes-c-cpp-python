#include<stdio.h>
void main()
{
    int arr[]={1,2,3,4,5,6,67};
    printf("The adderess of !st element of array is %d\n",&arr[0]);
    printf("The adderess of !st element of array is %d\n",arr);
    printf("The adderess of 2nd element of array is %d\n",&arr[1]);
    printf("The adderess of 2nd element of array is %d\n",arr+1);
    printf("The value at adderess of !st element of array is %d\n",*(&arr[0]));
    printf("The value at adderess of !st element of array is %d\n",*(arr));
    printf("The adderess at address of 2nd element of array is %d\n",*(&arr[1]));
    printf("The adderess at address of 2nd element of array is %d\n",*(arr+1));
    /*
    arr++;
    it will show error 
    because
    arr is constant.
    arr contain address of arr[0]
               which is const.
               */
    int*arrayptr=arr;
    arrayptr++;
    /*It is valid */
}