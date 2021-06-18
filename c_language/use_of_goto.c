#include<stdio.h>
int main()
{
int num;
for(int i=0;i<8;i++)
{
    printf("%d\n",i);
    for(int j=0;j<8;j++)
    {
        printf("Enter a number\n Enter 0 to exit\n");
        scanf("%d",&num);
        if(num==0)
        {
          goto Adil;
        }
    }
}
Adil:
return 0;
}