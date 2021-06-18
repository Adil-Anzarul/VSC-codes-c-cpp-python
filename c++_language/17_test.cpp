#include<iostream>
using namespace std;
void print(const int *a)
{   //*a=-10; it will show error
/*
const doesnt allow print() to modify arguments
it is generally used for pointers and reference variable
*/
    cout<<"The required value is >----->>"<<*a<<endl;
}
int main()
{
    int d=10;
    print(&d);

    return 0;
}
