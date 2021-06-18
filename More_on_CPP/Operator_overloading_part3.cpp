/*
Overloading of unary operator
    ++(Pre and Post)
*/

#include <iostream>
class Integer
{
private:
    int x;

public:
    void setData(int a)
    {
        x = a;
    }
    void showData()
    {
        std::cout << "x=" << x << "\n";
    }
    Integer operator++() //pre increment
    {
        Integer i;
        i.x = ++x;
        return (i);
    }
    Integer operator++(int) // post increment
    {                       /*
                if int is not mantioned then compiler will not be able 
                to diff. b/w two  function calls.
                we dont need to pass an argument during function call.  
                */
        Integer i;
        i.x = x++;
        return (i);
    }
};
int main()
{
    Integer i1, i2;
    i1.setData(3);
    i1.showData();
    //i2=++i1;   //i2=i1.operator++();


    i2 = i1++; // no argument is passed
    // i2=i1.operator++(4);
    
    i1.showData();
    i2.showData();
}