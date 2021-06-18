#include<iostream>
using namespace std;
class Text
{
    int a,b;
    public:
        Text(int i,int j):a(i),b(a+j)
        {  cout<<"The value of a is "<<a<<endl;
           cout<<"The value of b is "<<b<<endl;
        }
};
class Text002
{
    int b,a;
    public:
        Text002(int i,int j):b(i),a(b+j)
        {  cout<<"The value of a is "<<b<<endl;
           cout<<"The value of b is "<<a<<endl;
        }
};
int main()
{
    Text t(10,5);
    Text002 t002(2,-4);
    return 0;
}
