#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string s1, s2, s3;
    cout << "Enter a String\n";
    cin >> s1;
    //cout<<s1;
    ofstream john("anzarul.txt");
    john << s1;
    john.close();
    // ifstream cena("anzarul.txt");//ifstream cena2("anzarul.txt");
    // cena>>s2;
    // cout<<s2;
    // // getline(cena,s3);
    // // cout<<s3;
    // cena.close();

    return 0;
}
