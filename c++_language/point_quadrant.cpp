
#include <iostream>
using namespace std;
class Point
{
    int x = 0, y = 0;
    friend void quad(Point);

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void disPlay();
};

void Point::disPlay()
{
    cout << "The co-ordinates are ( " << x << " , " << y << " )" << endl;
}

void quad(Point obj)
{
    int a = obj.x;
    int b = obj.y;
    if (a > 0)
    {
        if (b > 0)
        {
            cout << "First Quad" << endl;
        }
        else if (b < 0)
        {
            cout << "Forth Quad" << endl;
        }
        else if (b == 0)
        {
            cout << "Point is on X-axis" << endl;
        }
    }
    else if (a < 0)
    {
        if (b > 0)
        {
            cout << "Second Quad" << endl;
        }
        else if (b < 0)
        {
            cout << "Third Quad" << endl;
        }
        else if (b == 0)
        {
            cout << "Point is on X-axis" << endl;
        }
    }
    else if (a == 0 and b != 0)
    {
        cout << "Point is on Y-axis" << endl;
    }
    else if (a == 0 && b == 0)
    {
        cout << "Point is at Origin" << endl;
    }
}
int main()
{
    Point p(0, 0);
    Point p1 = Point(1, 1);
    Point p2(2, 2), p3(3, 3);
    //p3.disPlay();

    // while(1){

    cout << "Enter The co-ordinate of a point to know its location" << endl;
    int x1;
    int x2;
    cin >> x1 >> x2;
    Point adil(x1, x2);
    quad(adil);
    // }
    return 0;
}
