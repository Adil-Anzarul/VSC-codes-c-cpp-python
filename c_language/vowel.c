/* write a programme in C to find input character is vowel or not*/
#include<stdio.h>
int main()
{
char a;
printf("Enter an alphabet\n");
scanf("%c",&a);
switch(a)
{
case 'A':
case 'a':
case 'E':
case 'e':
case 'I':
case 'i':
case 'O':
case 'o':
case 'U':
case 'u':
printf("%c is a vowel",a);
break;
default:
printf("%c is not a vowel",a);
}
}