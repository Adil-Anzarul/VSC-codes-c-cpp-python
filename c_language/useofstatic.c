#include<stdio.h>
/*
int function1()
{
    return 14;
}
void main()
{
    static int adil =function1();    //This line will show error
}
*/

int func1()
{
    static int myvar;  //By default myvar=0
    printf("The value of myvar is %d\n",myvar);
    myvar++;
    return 55;
}
int main()
{
    int val=func1();
    val=func1();
    val=func1();
    val=func1();
    val=func1();
    return 21;
}