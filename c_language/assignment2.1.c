//to compare two integer numbers
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d \n %d",&a,&b);
    if(a>b)
    {
        printf("%d is greater",a);
    }
    else if(b>a)
    {
        printf("%d is greater",b);
    }
    else
    {
        printf("Both are equal");
    }
    
}