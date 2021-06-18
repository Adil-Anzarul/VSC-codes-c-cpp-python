#include <iostream>
using namespace std;
template <class T1, class T2>
class adil
{
public:
    T1 a;
    T2 b;
    adil(T1 a, T2 b)
    {
        this->a = a;
        this->b = b;
    }
    void display()
    {
        cout << "Value of a is " << a << endl;
        cout << "Value of b is " << b << endl;
    }
};
int main()
{
    adil<int, char> obj(145, 'u');
    obj.display();

    return 0;
}
