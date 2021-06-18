#include <bits/stdc++.h>
using namespace std;
void print(unordered_map<int, string> &m)
{
    cout << m.size() << endl;
    for (auto &pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }
}

int main()
{
    /*
    1.inbuilt implementation
    2.time complexity
    3.valid keys datatype-basic datatype + string
    */
    unordered_map<int, string> m;
    m[1] = "Adil";
    m[5] = "Anzarul";
    m[3] = "Imran";
    m.insert({4, "Arbaj"});

    print(m);

    // auto it1=m.find(3);
    // if(it1==m.end())
    // {
    //     cout<<"NO VALUE FOUND\n";
    // }
    // else
    // {
    //     cout<<(*it1).first<<" "<<(*it1).second<<endl;
    // }

    // unordered_map<pair<int,int>,int> m22; //it will show error.
    return 0;
}