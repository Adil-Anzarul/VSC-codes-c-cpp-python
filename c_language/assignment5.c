#include <stdio.h>
int main()
{
    int arr[100];
    
    for(int i=0;i<100;i++)
    {
        arr[i]=2*i+5;
    }
    printf("The elements of array are\n");
    for(int i=0;i<100;i++)
   { printf("%d\n",arr[i]);}
   printf("Enter the element u wanna search\n");
   int s;
   int flag=0;
   scanf("%d",&s);
   for(int i=0;i<100;i++)
   {
       if(arr[i]==s)
       {
        flag=1;
        break;
       }
   }
   if(flag==0)
   {
       printf("*********ERROR**********");
   }
return 100;
}