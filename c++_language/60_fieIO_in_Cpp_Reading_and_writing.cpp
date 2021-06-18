#include<iostream>
#include<fstream>

/*
The useful classes for working with files in c++ are:
1. fstreambase
2, ifstream  ----> derived from fstreambase
3. ofstream  ----> derived from fstreambase
*/

/*
In order to work with file in c++, you will have to open it.
There are two ways to open a file
1. Using the constructor
2. Using the mrmber function open() of the class

*/
using namespace std;

int main(){
    string st = "Harry bhai5478";
    // Opening files using constructor and writing it
    ofstream out("sample60.txt"); // Write operation
    out<<st;

    string st2;
    // Opening files using constructor and reading it
    ifstream in("sample60b.txt"); // Read operation
    // in>>st2;
    // cout<<st2<<endl;

    getline(in, st2);  
    cout<<st2;

    return 0;
}
