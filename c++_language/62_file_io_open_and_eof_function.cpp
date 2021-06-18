#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ofstream out;
    out.open("sample60.txt");
    out << "This is me\n";
    out << "This is me also";
    out << "This is also me";
    out << "This is als1 me";
    out.close();

    ifstream in, in2;
    string st, st2;
    in.open("sample60.txt");
    // in>>st>>st2;
    // cout<<st<<st2;

    while (in.eof() == 0)
    {
        getline(in, st);
        cout << st << endl;
    }

    in.close();

    string str;
    in2.open("sample60.txt");
    while (in2.eof() == 0)
    {
        in2 >> str;
        cout << str << endl;
    }
    in2.close();

    return 0;
}