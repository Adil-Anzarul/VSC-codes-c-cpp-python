#include<iostream>
using namespace std;

typedef struct employee
{
    
    int eId; //4
    char favChar; //1
    float salary; //4
} ep;

union money
{
    
    int rice; //4
    char car; //1
    float pounds; //4
    
} jk;


int main(){
    enum Meal{ breakfast, lunch, dinner};
    Meal m1 = lunch;
    cout<<(m1==2);
    // cout<<breakfast;
    // cout<<lunch;
    // cout<<dinner; 
    // union money m1;
    // m1.rice = 34;
    // m1.car = 'c';
    // cout<<m1.car;

    ep harry;
    // struct employee shubham;
    // struct employee rohanDas;
    // harry.eId = 1;
    // harry.favChar = 'c';
    // harry.salary = 120000000;
    // cout<<"The value is "<<harry.eId<<endl; 
    // cout<<"The value is "<<harry.favChar<<endl; 
    // cout<<"The value is "<<harry.salary<<endl; 

    cout<<"\n\n\n"<<"Size of structure "<<sizeof(harry)<<endl;
    /*
    The sizeof for a struct is not always equal to the sum of sizeof of 
    individual members.
    This is because of the paddling added by compiler to avoid 
    alignment issue.
    */
    // cout<<"Size of union "<<sizeof(union money);
    
    
    return 0;
}

// see more at geeksforgeeks about paddling
