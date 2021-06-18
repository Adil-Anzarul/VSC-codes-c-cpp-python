// /*
// Given N string , print unique strings
// in lexiographical order 
// N<=10^5
// |S| <=100000
// */
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     set<string> s;
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         string str;
//         cin>>str;
//         s.insert(str);
//     }

//     for(auto value : s)
//     {
//         cout<<value<<endl;
//     }
//     return 0;
// }




/*
Given N string and Q queries.
In each query you are given a string
print yes if string is present
else print no.
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<string> s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string str;
        cin>>str;
        s.insert(str);
    }
    int q;
    cin>>q;
    while(q--)
    {
        string str;
        cin>> str;
        if(s.find(str)==s.end())
        {
            cout<<"no\n";
        }
        else{
            cout<<"yes\n";
        }
    }
    return 0;
}




