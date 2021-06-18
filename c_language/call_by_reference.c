#include<stdio.h>
/*
This is an example of call by reference
*/
/* ths function is gonna swap the vales  */
void swap(int*x, int*y)
{
int temp;
temp=*x;
*x=*y;
*y=temp;
}

void main()
{
int a=34,b=74;
printf("%d and %d \n",a,b);
swap(&a,&b);
printf("%d and %d \n",a,b);

}
