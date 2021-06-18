#include<iostream>
using namespace std;
int a;
class A
{
    int a;
public:
    void setData(int a)
    {
        ::a=a;
        this->a=a;
    }
};