#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, multiset<string>> m;
    cout << "Enter no of students\n";
    int nos;
    int count;
    cin >> nos;
    count = nos;
    while (nos--)
    {
        string name;
        cout << "Enter name of " << (count - nos) << " th student:  ";
        cin >> name;
        int marks;
        cout << "Enter marks of " << (count - nos) << " th student:  ";
        cin >> marks;
        marks*=(-1);
        m[marks].insert(name);
    }


    
    for(auto i:m)
    {

        auto temp_set = i.second;

        for (auto s : temp_set)
        {
            cout << s << " " << i.first*(-1) << endl;
        }
    }

    return 0;
}


/*
29 see for alternative code
*/