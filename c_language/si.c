#include<stdio.h>
int main()
{
float p,r,t;
printf("Enter Principle \n rate of interest \n and time \n");
scanf("%f%f%f",&p,&r,&t);

float si=(p*r*t)/100;
printf("Sinple interest = %f ",si);
return 0;
}