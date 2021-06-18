#include<bits/stdc++.h>
using namespace std;

int main()
{
    // int n;
    // cin>>n;
    // vector<int> v(n);
    // for(int i=0;i<n;i++)
    // {
    //     cin>>v[i];
    // }
    // int min=*min_element(v.begin(),v.end());//it return location(pointer or iterator)
    // cout<<min<<endl;
    // int max=*max_element(v.begin(),v.end());
    // cout<<max<<endl;
    // int sum=accumulate(v.begin(),v.end(),0);/* gives sum of ll elements*/
    // //int sum= accumulate(st. add. , end add. +1, initial value of sum);
    // cout<<sum<<endl;
    // int ct=count(v.begin(),v.end(),2);
    // cout<<ct<<endl;
    // auto it=find(v.begin(),v.end(),2);
    // if(it !=v.end())
    //     cout<<(*it)<<endl;
    // else
    // cout<<"Element not found\n";
    // reverse(v.begin(),v.end());
    // for(auto val: v){
    //     cout<<val<<" ";
    // }
    // cout<<endl;
    // string s="abcdefghijklmnop";
    // reverse(s.begin()+1,s.end());
    // cout<<s<<endl;

    int n;
    cin>>n;
    int v[n];
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int min=*min_element(v,v+n);//it return location(pointer or iterator)
    cout<<min<<endl;
    int max=*max_element(v,v+n);
    cout<<max<<endl;
    int sum=accumulate(v,v+n,0);/* gives sum of ll elements*/
    //int sum= accumulate(st. add. , end add. +1, initial value of sum);
    cout<<sum<<endl;
    int ct=count(v,v+n,2);
    cout<<ct<<endl;
    auto it=find(v,v+n,2);
    if(it !=v+n)
        cout<<(*it)<<endl;
    else
    cout<<"Element not found\n";
    reverse(v+2,v+n);
    for(auto val: v){
        cout<<val<<" ";
    }
    cout<<endl;
    string s="abcdefghijklmnop";
    reverse(s.begin()+1,s.end());
    cout<<s<<endl;

    return 0;
}
