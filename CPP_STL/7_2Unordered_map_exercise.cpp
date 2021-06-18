/*
Given N strings ,Q queries.
In each query you are given a string
find frequency of that string.
N<=10^5
|S|<=100
|Q|<=10^6
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string,int> m;
    int n;
    cin>>n;
    for (int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        m[s]++;
    }
    int q;
    cin>>q;
    while(q--)
    {
        string s;
        cin>>s;
        cout<<m[s]<<endl;
    }


    // multimap<int,int> mx;
    // mx.insert({1,10});
    // mx.insert({1,-10});
    // cout<<mx.size()<<endl;
    // for(auto it:mx)
    // {
    //     cout<<it.first<<" "<<it.second<<endl;
    // }

    return 0;
}

/*
map-keys are unique.
multimap-keys are not unique.
*/
/*
map-ordered 
unordered_map -unordered
*/ 