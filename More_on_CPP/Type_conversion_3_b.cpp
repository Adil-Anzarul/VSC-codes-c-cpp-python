#include<iostream>
using namespace std;

class Item
{
    private:
    int a,b;
    public:
    void showData()
    {
        cout<<"\na = "<<a<<" b = "<<b<<"\n";
    }
    // Item(){}
    // // Item(Product p)
    // // {
    // //     a=p.getM();
    // //     b=p.getN();
    // // }
    void setData(int x,int y)
    {
        a=x;b=y;
    }
};
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
    operator Item()
    {
        Item temp;
        temp.setData(getM(),getN());
        return(temp);
    }

};


int main()
{
    Item i1;
    Product p1;
    p1.setData(3,4);
    i1=p1;
    

    i1.showData();
    return 0;
}


