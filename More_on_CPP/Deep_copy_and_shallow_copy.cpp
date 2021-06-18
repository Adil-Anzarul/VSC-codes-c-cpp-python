/*
How we can create a copy of object?
----Copy Constructor
----Implicit copy assignment operator

By default compiler create copy constructor and 
by default compiler overload copy assignmen operator



*/
/*
Deep Copy 
Creating an object by copying data of another object along with the value 
of memory resources resides outside  the object but handled by that object.  
*/
#include<iostream>
using namespace std;
// class Dummy
// {
//     private:
//     int a,b;
//     public:
//     void setData(int x,int y)
//     {
//         a=x; b=y;
//     }
//     void showData()
//     {
//         cout<<"\na = "<<a<<" b = "<<b<<"\n";
//     }
//     // Dummy(Dummy &d)
//     // {
//     //     a=d.a; b=d.b;
//     // }
// };
// int main()
// {
//     Dummy d1;
//     d1.setData(3,4);
//     Dummy d2=d1;//shallow copy

//     // Dummy d3;
//     // d3=d2;
//     d2.showData();
//     return(0);
// }
class Dummy
{
    private:
    int a,b;
    int *p;
    public:
    Dummy()
    {
        p=new int;
    }
    void setData(int x,int y,int z)
    {
        a=x; b=y;*p=z;
    }
    void showData()
    {
        cout<<"\na = "<<a<<" b = "<<b<<"\n";
    }
    Dummy(Dummy &d)  // for deep copy
    {
        a=d.a; b=d.b;
        p=new int;// p=d.p;//-- it will create problem
        *p=*(d.p);
    }
    ~Dummy()
    {
        delete p;
    }  
};
int main()
{
    Dummy d1;
    d1.setData(3,4,5);
    Dummy d2=d1;

    
    d2.showData();
    return(0);
}

