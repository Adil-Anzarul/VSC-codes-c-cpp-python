/*
menu driven calculator
*/
#include<stdio.h>
#include<math.h>
void main()
{
int a,b;
float c, d;
printf("Press\n 1.Add \n 2.Sub \n 3.Mul \n 4.Div \n 5.Square \n6.Cube\n");
char e;
scanf("\n%c",&e);
switch(e)
{
case '1':
printf("Enter two numbers\n");
scanf("%d%d",&a,&b);
printf("%d + %d = %d",a,b,(a+b));
break;
case '2':
printf("Enter two numbers\n");
scanf("%d%d",&a,&b);
printf("%d - %d = %d",a,b,(a-b));
break;
case '3':
printf("Enter two numbers\n");
scanf("%d%d",&a,&b);
printf("%d * %d = %d",a,b,(a*b));
break;
case '4':
printf("Enter two numbers\n");
scanf("%d%d",&a,&b);
float j=(float)a/b;
printf("%d / %d = %f",a,b,j);
break;
case '5':
printf("Enter a number\n");
scanf("%f",&c);
float sqroot=sqrt(c);
printf("Sqare root of %f = %f",c,sqroot);
break;
case '6':
printf("Enter a number\n");
scanf("%f",&d);
float cuberoot=cbrt(d);
printf("cube root of %f = %f",d,cuberoot);
break;
default:
printf("Invalid input");
}
}