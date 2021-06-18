#include<iostream>
using namespace std;

class Base1
{ 
    int a1;
    public:
        void setBase1(int x1)
        {
            a1=x1;
        }
        void showBse1(void)
        {
            cout<< "The Value of Base1's variable  is "<<a1<<endl;
        }
};
class Base2
{ 
    int a2;
    public:
        void setBase2(int x2)
        {
            a2=x2;
        }
        void showBse2(void)
        {
            cout<< "The Value of Base2's variable  is "<<a2<<endl;
        }
};
class Derived : public Base1,public Base2
{   public:
    void set(int x,int y)
    {  
        setBase1(x);
        setBase2(y);
    }

    void show()
    {
        showBse1();
        showBse2();
    }
    void console1()
    {   int x,y;
        cout<<"Enter the value of first variable"<<endl;
        cin>>x;
        cout<<"Enter the value of second variable"<<endl;
        cin>>y;
        set(x,y);
    }
};
int main()
{
    Derived d;
    d.console1();
    d.show();
    d.setBase1(54);
    d.show();
    return 0;
}
