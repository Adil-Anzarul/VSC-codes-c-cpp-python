/*
. Namespace is a container for identifier.
. It puts the name of its member in a distinct
   space so that the don't conflict with the 
   name in other namespace or global namespace.


 HOW TO CREATE NAMESPACE?

 namespace MySpace
 {
     //Declaration
 }

. Namespace definitio does't terminates with a
  semicolon like in class defination.
. The namespace definition must be done at global
  scope, or nested inside another namespace.
. You can use an alias name for your namrspace name,
  for ease of use 
  namespace ms=MySpace;
. Namespace is not a class , you cannot create 
  instance of namespace 


Unnamed napespace
. There can be unnamed namespace too. 
  namespace
  {
      //declarations
  }


NAMESPACE CAN BE EXTENDED
A namespace defination can be continued and extended over 
multiple files, they are not redefined or overridden. 

ACCESSING MEMBERS OF NAMESPACE 
Any name(identifier) declared in a namespace
can be explicitly speified using the namespace's name and 
the scope resolution :: operator with the identifier. 

*/
#include <iostream>
using namespace std;
namespace MySpace
{

    int a;
    int f1();
    class A
    {
    public:
        void fun1();
    };
}
namespace my = MySpace;
int MySpace::f1()
{
    cout << "Hellow f1" << endl;
    return 1;
}
void MySpace::A::fun1()
{
    cout << "Hellow fun1" << endl;
}
using namespace MySpace;
int main()
{
    //     MySpace::a=5;
    //    MySpace::f1();
    //    MySpace::A obj;
    //    obj.fun1();

    a = 5;
    f1();
    A obj;
    obj.fun1();
    return 0;
}

/*
The using keyword allows you to import an entire namespace 
  into your program with a global scope .
It ca be used to import a namespace into another namespace 
  or any program.

eg----

FILE1.h

namespace MySpace
{
    int a,b;
    class A
    {
        //some code
    };
}

FILE2.h

#include"FILE1.h"
namespace MyNewSpace
{
    using namespace MySpace;
    int x,y;
    A obj;
}
*/