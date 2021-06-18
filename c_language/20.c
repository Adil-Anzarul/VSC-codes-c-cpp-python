//20
#include<stdio.h>
void swap(int *a,int *b)
{
    int temp=*b;
    *b=*a;
    *a=temp;
}
void main()
{
    printf("Enter two numbers\n");
    int n,m;
    scanf("%d%d",&n,&m);
    swap(&n,&m);
    printf("%d ,%d ",n,m);
}