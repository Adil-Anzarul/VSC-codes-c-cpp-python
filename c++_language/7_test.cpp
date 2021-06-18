//Swaping by using Reference vaiable
#include<iostream>
void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

int main()
{
    int a,b;
    std::cout<<"Enter two numbers a and b to swap\n";
    std::cin>>a>>b;
    std::cout<<"value of a ="<<a<<"  "<<"value of b ="<<b<<std::endl;
    swap(a,b);
    std::cout<<"value of a ="<<a<<"  "<<"value of b ="<<b<<std::endl;
    // int c=10;
    // int &d=c;
    // d=-10;
    // std::cout<<c;
    return 0;
}
/*
When a variable is declared as a reference, it becomes an alternative 
name for an existing variable. 
A variable can be declared as a reference by putting ‘&’ in the declaration. 

If a function receives a reference to a variable, it can modify the value 
of the variable.
*/ 