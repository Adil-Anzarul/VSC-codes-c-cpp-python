//2
#include<stdio.h>
void main()
{
    printf("Enter a number\n");
    int n;
    scanf("%d",&n);
    printf("sum of even no.\n");
    for(int i=1;i<=n;i++)
    {
      if(i%2==0)
      {
          printf("%d\n",i);
      }
    }

    printf("sum of odd no.\n");
    for(int i=1;i<=n;i++)
    {
      if(i%2!=0)
      {
          printf("%d\n",i);
      }
    }
}
