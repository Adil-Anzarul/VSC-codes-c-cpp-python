//this program will reverse the entered string
#include<stdio.h>
#include<string.h>
int main()
{
printf("Enter a string\n");
char str[34];
gets(str);
int j=0;
for(;; j++)
{
    if(str[j]=='\0' )
    break;
}
for(int i=0;i<=(j-1)/2;i++)
{
char temp;
temp=str[i];
str[i]=str[j-i-1];
str[j-i-1]=temp;
}

puts(str);


}