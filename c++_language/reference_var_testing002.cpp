#include<iostream>
#include<string>
using namespace std;
class A
{
    int a;
    public:
    A & setData(int a)
    {
        this->a=a;
        return *this;
    }
    
    void getData()
    {
        cout<<"The value of a is "<<a<<endl;
    }
    void obj(A j)
    {
        cout<<j.a<<endl;
    }
};
int main()
{
    A a,b;

    
    a.setData(8).getData();

    b.obj(b.setData(-100));
    return 0;
}
