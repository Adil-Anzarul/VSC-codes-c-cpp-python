#include<stdio.h>
#include "patterninh.c"
#define pi 3.14
#define square(x)   x*x      /*Defining macro*/
#define cube(x)   x*x*x      /*Defining macro*/
#define pro(n,m)  n*m        /*Defining macro*/
void main2(int a);
void main()
{
printf("Enter radius of circle\n");
int r;
scanf("%d",&r);
float area=pi*square(r);
printf("The area of Circle is %f\n",area);
printf("Enter the sides of rectangle\n");
int n,m;
scanf("%d%d",&n,&m);
float Area=pro(n,m);
printf("The area of rectangle is %f\n ",Area);
main2(2);
main3();
}

void main2(int a)
{
printf("File name is %s\n",__FILE__);      /*PRE DEFINED MACRO*/
printf("Today's date is %s\n",__DATE__);   /*PRE DEFINED MACRO*/
printf("Time now is %s\n",__TIME__);       /*PRE DEFINED MACRO*/
printf("Line no. is %d\n",__LINE__);       /*PRE DEFINED MACRO*/
printf("ANSI : %d\n",__STDC__);            /*PRE DEFINED MACRO*/
}