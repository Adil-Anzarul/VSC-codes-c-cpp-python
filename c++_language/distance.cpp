#include<cmath>
#include <iostream>
using namespace std;
class Coordinate
{
protected:
    int a, b;

public:
    void point(int x, int y)
    {
        a = x;
        b = y;
    }
    void show(Coordinate objx)
    {
        cout << objx.a << objx.b << endl;
    }
    void calculate(Coordinate c1, Coordinate c2)
    {
        int r = ((c1.a - c2.a) * (c1.a - c2.a)) + ((c1.b - c2.b) * (c1.b - c2.b));
        float k=sqrt(r);
        cout << "The square of distance between two points " << endl
             << "(" << c1.a << "," << c1.b << ")"
             << " and "
             << "(" << c2.a << "," << c2.b << ")"
             << " is " << r << endl;
        cout << "The  distance between two points " << endl
             << "(" << c1.a << "," << c1.b << ")"
             << " and "
             << "(" << c2.a << "," << c2.b << ")"
             << " is " << k << endl;
    }
};

int main()
{
    Coordinate a1, b1, c;
    int px1, py1,px2,py2;
    cout << "Enter the coordinates (x,y) for point P1" << endl;

    cin >> px1 >> py1;
    a1.point(px1, py1);
    cout << "Enter the coordinates (x,y) for point P2" << endl;
    cin >> px2 >> py2;
    b1.point(px2, py2);
    //c.show(a1);
    c.calculate(a1, b1);
    return 0;
}
