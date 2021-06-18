#include<bits/stdc++.h>
using namespace std;

// void printVec(vector<pair<int,int>> &v)
void printVec(vector<int> &v)
{
    cout<<"Size :  "<<v.size()<<endl;
    for (int i =0; i < v.size(); ++i)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    // vector<pair<int,int>> v ={{1,2},{2,3},{3,4}};
    // printVec(v);
    // // v.push_back({44,-44});
    // // printVec(v);
    // int n;
    // cin>>n;
    // for (int i = 0; i < n; i++)
    // {
    //     int x,y;
    //     cin>>x>>y;
    //     v.push_back({x,y});
    // }
    // printVec(v);

    // int N;
    // cin>>N;
    // vector<int> v[N]; // Array of Vector
    // for (int i = 0; i <N; i++)
    // {
    //     int n;
    //     cin>>n;
    //     for(int j=0;j<n;j++)
    //     {
    //         int x;
    //         cin>>x;
    //         v[i].push_back(x);
    //     }
    // }
    
    // for (int i = 0; i < N; i++)
    // {
    //     printVec(v[i]);
    // }
    
    // cout<<v[0][0];//no. of rows is fixed but n. f colunms is dynamic.


    int N;
    cin>>N;
    vector<vector<int>> v; // Array of Vector
    // for (int i = 0; i <N; i++)
    // {
    //     int n;
    //     cin>>n;
    //     vector<int> temp;
    //     for(int j=0;j<n;j++)
    //     {
    //         int x;
    //         cin>>x;
    //         temp.push_back(x);
    //     }
    //     v.push_back(temp);
    // }


    for (int i = 0; i <N; i++)
    {
        int n;
        cin>>n;
        v.push_back(vector<int> ());
        for(int j=0;j<n;j++)
        {
            int x;
            cin>>x;
            v[i].push_back(x);
        }
    }


    v[0].push_back(10);
    v.push_back(vector<int> ());
    for (int i = 0; i < v.size(); i++)
    {
        printVec(v[i]);
    }
    cout<<v[0][1];
    
    return 0;
}
