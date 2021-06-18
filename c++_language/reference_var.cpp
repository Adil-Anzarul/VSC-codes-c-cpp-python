#include<iostream>
using namespace std;
void swapRef(int &,int &);
int main()
{
    int x,y;
    cout<<"Enter the value of x"<<endl;
    cin>>x;
    cout<<"Enter the value of y"<<endl;
    cin>>y;
    cout<<"Value before swaping"<<endl;
    cout<<x<<"\t"<<y<<endl;
    swap(x,y);
    cout<<"Value after swaping"<<endl;
    cout<<x<<"\t"<<y<<endl;
    
    return 4;
}

void swapRef(int & a,int & b)
{
    int temp =a;
    a=b;
    b=temp;
}