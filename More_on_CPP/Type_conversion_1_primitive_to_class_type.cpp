/*
PRIMITIVE TYPE TO CLASS TYPE CAN BE IMLEMENTED THROUGH CONSTRUCTOR.
*/

#include<iostream>
class Complex
{   private:
    int  a,b;
    public:
    Complex(){}//default constructor
    Complex(int k)
    {
        a=k;
        b=0;
    }
    void setData(int x,int y)
    {
        a=x;b=y;
    }
    void showData()
    {
        std::cout<<"\na = "<<a<<" b = "<<b<<"\n";
    }
};

int main()
{
    Complex c1;
    int x=5;
    c1=x;
    //c1.Complex(x)  not a syntax just to understand
    /*
    Costructor is also called automatically 
    when one dataTYPE is assigned to other datatype.
    */
    c1.showData();
    return 1;
}