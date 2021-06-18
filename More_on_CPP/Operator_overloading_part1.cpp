/*
Operator overloading
1. When an operator is overloaded with multiple jobs,it is known as operator overloading
2. It is a way to implement compile time polymorphism.

Rules to remember
1. Any symbol can be used as function name 
     ----if it is valid operator in C language
     ----if it is preceded by operator keyword
2. You can not overload sizeof and ?: operator
*/


#include<iostream>
class Complex
{
    private:
    int a,b;
    public:
    void setData(int x,int y)
    {
        a=x;
        b=y;
    }
    void showData()
    {
        std::cout<<"\na= "<<a<<" b= "<<b<<std::endl;
    }
    // Complex add(Complex c)
    // {
    //     Complex temp;
    //     temp.a=a+c.a;
    //     temp.b=b+c.b;
    //     return temp;
    // }
    Complex operator +(Complex c)
    {
        Complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;
    }
};

int main()
{
    Complex c1,c2,c3;
    c1.setData(3,4);
    c2.setData(5,6);
    //c3=c1+c2;// it will show error 
             //because compilor know how to deal with primitive type 
             //but don't know to deal with non primitive type
    // c3=c1.add(c2);

    // c3=c1.operator+(c2);
    c3=c1+c2;
    // c1 called + and passed c2 as an argument 

    c3.showData();
    return 0;
}
/*
Those symbol that are not operator in C language can not be used for operator
 overloading in Cpp
eg--- # ,$ etc can'nt be used. 
*/