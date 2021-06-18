#include <iostream>
using namespace std;

template <class T>
class Harry
{
public:
    T data;
    Harry(T a)
    {
        data = a;
    }
    void display();
};

template <class T>
void Harry<T>::display()
{
    cout << data << endl;
}


void func(int a){
    cout<<"I am First func()  "<<a<<endl;
}

template <class T>
void func(T a)
{
     cout<<"I am templatised func()  "<<a<<endl;
}

   
int main()
{
    // Harry<float> h(5.7);
    // Harry<char> h('g');


    // Harry<int> h(87);
    // // cout << h.data<< endl;
    // h.display();


    func(4);  // Exact match takes he hifhest priority   
    func('v');

    return 0;
}
