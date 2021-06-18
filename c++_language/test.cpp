#include<iostream>
using namespace std;


enum a1{val1,val2,val3=15,val5};


int main()
{
    // float a=3.14;
    // int c=int(a); 
    // a=int(a);
    // cout<<a<<endl<<c;


    // int x=10;
    // int & y=x;
    // y=100;
    // cout<<x;
    // // cout<<y;
    


    // int m[4]={100,200,300,400};
    // cout<<&(m[0])<<endl;
    // cout<<m<<endl;


     a1 g,y,x;
     g=val5;
     y=val3;
    //  x=0  it will show error;
     cout<<g<<endl<<y;
    return 0;
}
