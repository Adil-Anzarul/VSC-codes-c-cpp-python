#include<stdio.h>
#include<math.h>
int main()
{
printf("This programme will give u solution toQuadratic equation.\n Enter a,b,c where ...");
printf(" aXX+bX+c=0  \n");
int a,b,c;
scanf("%d\n",&a);
scanf("%d\n",&b);
scanf("%d",&c);
double D=b*b-4.0*a*c;
if(D>0)
{double r=sqrt(D);
printf("\nIt will have real roots which are .....");
double r1=(-b+r)/2*a;
double r2=(-b-r)/2*a;
printf("\n%f and\n  %f",r1,r2);
}
if(D<0)
{D=D*(-1);
double s=sqrt(D);
s=s/(2*a);
double x=(-b)/(2*a);
printf("It will have imaginary roots which are .......");
printf(" \n (%f + %f i )  and \n   (%f - %f i)",x,s,x,s);
}
return 0;
}





