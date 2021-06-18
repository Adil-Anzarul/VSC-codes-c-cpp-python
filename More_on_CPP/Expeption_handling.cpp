// 3 keywords --------try ,throw and catch.
#include <iostream>
using namespace std;

/*
syntax--

try{
}
catch(type1 arg){
}  
catch(type2 arg){
}
...........
catch(typeN arg){
} 
*/
void fun()
{
    throw 10;
}
int main()
{
    int i=3;
    cout << "welcome";
    try
    {

        //throw;//--terminated called without an active exception 
        fun();
        // if(i==1)
        // throw i;
        // if(i==2)
        // throw 2;
        // if(i==3)
        // throw 3;
        cout << "\nIn TRY";
        /*
        line below throw will not get executed
        */
    }

    // catch (...)
    // {
    //     cout << "\nException No. ";
    // }
    // catch (double e)
    // {
    //     cout << "\nException No. " << e;
    // }

    catch (int e)
    {
        cout << "\nException No. " << e;
    }


    cout << "\nLast Line";
    return 1;
}
/*


1> if only throw key word is used then 
terminate function is called automatically
which called abort function 
and program get terminated.


2> try and catch are used simultaneously.

3> if datatype of throw donot match with datatype 
of arg. of any catch block then program will terminate.


*/

/*
1. When an exception is caught ,arg will recieve its value.
2. If you dont need access to the exception itself,specify only 
   type in the catch clause--arg is optional
3. Any type od data can be caught , including classes that you create.
4. The general forn of throw statement is---
               throw exception;
5. Throw must be executed either within the try block properly or from 
   any function that the code within the block calls.  
*/