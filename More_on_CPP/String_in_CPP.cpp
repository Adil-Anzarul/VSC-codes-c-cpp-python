/*
--->The string class is a specialization of a more general template class called basic_string
--->Since defining a class in C++ is creating a new datatype , string is deived data type
--->This means operators can be overloaded for a class
*/

/*
String is safe than Char array
--->Careless programmer can overrun the end of an array that hold null terminated string.
--->For Ex , using strcpy()
--->string class handles such issues
          char s1[10];
          strcpy(s1,"Hellow online students");
*/
/*
String is in STL 
---> String is an another container class 
---> To use string class, you have to include string header 
---->    #include<string>

Constructor 
string class support many constructor ,some of them are 
  string()
  string(const char *str)
  string(const string &str)
*/
/*
OPERATORS
    =  Assignment
    +  Concatenation
    += Concatenation assignment
    == Equality
    != Inequality
    <  Less than
    <= Less than or equal
    >  Greater than
    >= Greater than or equal
    [] Subscripting
    << Insertion(for output)
    >> Extraction(for input)
*/
/*
USEFUL METHODS
         .assign()
         .append()
         .insert()
         .replace()
         .erase()
         .find()
         .rfind()
         .compare()
         .c_str()
         .size()
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    cout<<"========================================================\n";
    string s1;
    char str[]="Hellow";
    string s2=str;
    string s3=s2;
    s1+=s2;
    s1=s1+str;//mixed operation
            //    You can mix string 
            //    object with another 
            //    string object or c style string 
            //c++ string can also be concatenated with character constant.
    cout<<s1<<endl<<s2<<endl;
    return 100;
}

