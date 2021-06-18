/*
Class type to another class type
---> conversion through constructor
---> conversion through casting operator
*/


#include<iostream>
using namespace std;
class Product
{
    int m,n;
    public:
    void setData(int x,int y)
    {
        m=x;n=y;
    }
    int getM()
    {return m;}
    int getN()
    {return n;}

};
class Item
{
    private:
    int a,b;
    public:
    void showData()
    {
        cout<<"\na = "<<a<<" b = "<<b<<"\n";
    }
    Item(){}
    Item(Product p)
    {
        a=p.getM();
        b=p.getN();
    }
};



int main()
{
    Item i1;
    Product p1;
    p1.setData(3,4);
    i1=p1;
    // for  conversion through constructor-constructor should b made in i1'sclass
    // for  conversion through casting operator--operator should b made in p1'c class

    i1.showData();
    return 0;
}