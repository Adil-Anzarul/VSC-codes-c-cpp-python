//To find weather an integer is odd or even
#include<stdio.h>
void main()
{
   int n;
   printf("Enter a number \n");
   scanf("%d",&n);
   if(n%2==0)
   {
       printf("It is even number");
   }
   else if(n%2!=0)
   {
       printf("It is odd number");
   }
}