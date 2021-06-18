#include<stdio.h>
void swap(int *a,int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
}
void main()
{
    printf("Enter two numbers to swap\n");
    int a;
    int b;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    printf("Enter the value of b\n");
    scanf("%d",&b);
    swap(&a,&b);
    printf("The value of a is = %d\nThe value of b is =%d\n",a,b);
}