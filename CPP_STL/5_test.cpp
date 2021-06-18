#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int,string>> v={{1,"Adil"},{2,"Imran"},{3,"Manish"}};

    // vector<pair<int,string>> :: iterator al;
    // for(al=v.begin();al !=v.end();al++)
    // {
    //     cout<<(*al).first<<" "<<(*al).second<<endl;
    // }
    for(auto it :v)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<"Enter the no. of elements you want to add \n";
    int n;
    cin>>n;
    cout<<"Enter "<<n<<" elements in vctor\n";
    
    for(int i=0;i<n;i++)
    {
        cout<<"Enter pair"<<(i+1)<<".first\n";
        int j;
        cin>>j;
        cout<<"Enter pair"<<(i+1)<<".second\n";
        string j1;
        cin>>j1;
        pair<int,string> p1={j,j1};
        v.push_back(p1);
    }
    for(auto it :v)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    
    return 0;
}
