#include <iostream>
using namespace std;
class Base
{
public:
    int base_var;
    void display()
    {   cout<<"Base Class Display Function is evoked"<<endl;
        cout << "The Value of Base_var is " << base_var << endl;
    }
};
class Derived : public Base
{
public:
    int deriver_var;
    void display()
    {   cout<<"Derived Class Display Function is evoked"<<endl;
        cout << "The Value of Deriver_var is " << deriver_var << endl;
    }
};
int main()
{
    Base base_obj;
    Derived derived_obj;
    Base *base_ptr;
    Derived *deriver_ptr;

    base_ptr=&base_obj;
    base_ptr->base_var=-100;
    base_ptr->display();


    deriver_ptr=&derived_obj;
    deriver_ptr->deriver_var=-58;
    deriver_ptr->base_var=-600;
    deriver_ptr->display();
    
    base_ptr=&derived_obj;
    base_ptr->base_var=-951;
    base_ptr->display();


    


    //deriver_ptr=&base_obj;    //it will show error
   


    return 0;
}
