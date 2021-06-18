#include <iostream>
class Complex
{
private:
    int a, b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    void showData()
    {
        std::cout << "\na= " << a << " b= " << b << std::endl;
    }
    Complex operator-()
    {
        Complex temp;
        temp.a=-a;
        temp.b=-b;
        return(temp);
    }
};

int main()
{
    Complex c1, c2;
    c1.setData(3, 4);
    c1.showData();
    // c2=-c1;
    c2=c1.operator-();
    c2.showData();
    return 0;
}