#include<iostream>
using namespace std;
class SimpC
{
protected:
int a,b;
float result1;
public:
    void add()
    {
        result1=a+b;
    }
    void sub()
    {
        result1=a-b;
    }
    void mul()
    {
        result1=a*b;
    }
    void div()
    {
        result1=(a*1)/b;
    }
    void show()
    {
        cout<<result1<<endl;
    }
    void input(int a21, int b21)
    {
        a=a21;
        b=b21;
    }
};
class ScieC
{
protected:
float result;
public:
    void mod(int x,int y)
    {
        result=x%y;
    }
    void recp(float z)
    {
        result=(1/z);
    }
    void sq(int a1)
    {
        result=a1*a1;
    }
    void cube(int a1)
    {
        result=a1*a1*a1;
    }
    
};

class HybrC : public SimpC ,public ScieC
{
    public:
    void show()
    {   
        cout<<result1<<endl;
    }
    void display()
    {
        cout<<result<<endl; 
    }
    
    
};
int main()
{    HybrC hy;
    cout<<"Enter two numbers"<<endl;

    int p,q;
    cin>>p>>q;
    hy.input(p,q);
    hy.add();
    hy.show();
    hy.mul();
    hy.show();

    hy.recp(2);
    hy.display();

    hy.recp(1);
    hy.display();

    hy.sq(8);
    hy.display();



    return 100;
}


