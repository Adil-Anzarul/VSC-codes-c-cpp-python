#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    // //Connecting your file with hout stream
    // ofstream hout("sample60.txt");

    // //Creating a new string and filling it with the string entered by user
    // string name;
    // cout<<"Enter your name";
    // cin>>name;

    // //Writing a string to a file
    // hout<<"My name is "+name;
    // hout.close();

    ifstream hin("sample60.txt");
    string content;
    hin>>content;
    //hin>>content;
    cout<<"The content of this file is : "<<content;
    hin.close();

    
    return 0;
}