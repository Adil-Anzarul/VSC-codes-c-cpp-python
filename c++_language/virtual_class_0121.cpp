#include <iostream>
using namespace std;
class Base
{
public:
    virtual void display() = 0;
};
class Derived : public Base
{
public:
    void display()
    {
        cout<<"hi\nhi\nhi\nhi\nhi\n";
    }
};
int main()
{
    Derived d;
    d.display();
    return 0;
}
