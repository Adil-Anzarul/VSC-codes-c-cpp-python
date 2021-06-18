#include<bits/stdc++.h>
using namespace std;

bool cmp(string a,string b)
{
    if(a<b)
    return true;
    return false;
}

int main()
{
    vector<string> vec;
    int n;
    cout<<"Enter the no. of string u wanna compare\n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        vec.push_back(s);
    }
    cout<<"-------------------------------------\n";

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(cmp(vec[i],vec[j]))
            swap(vec[i],vec[j]);
        }
    }
    for(auto i: vec)
    {
        cout<<i<<endl;
    }


    return 0;
}

