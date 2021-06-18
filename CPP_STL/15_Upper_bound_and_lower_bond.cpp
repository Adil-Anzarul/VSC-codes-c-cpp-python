/*
upper_bond() and lower_bond() fxn return location of element
ie
in case of vector it return iterator
in case of array it return pointer.

you must have to sort before using upper_bond() and lower_bond() fxn.
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    // int n;
    // cin>>n;
    // int a[n];
    // for(int i=0;i<n;i++)
    // {
    //     cin>>a[i];
    // }
    // sort(a,a+n);
    // for(int i=0;i<n;i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
    // int *ptr=lower_bound(a,a+n,26);  // lower_bound(start add,end add +1,element);
    // // int *ptr2=upper_bound(a,a+n,5);
    // if(ptr==(a+n)){
    //     cout<<"Not found";
    //     return 0;
    // }
    // cout<<*ptr<<endl;
    // return 0;




    // int n;
    // cin>>n;
    // vector<int> a(n);
    // for(int i=0;i<n;i++)
    // {
    //     cin>>a[i];
    // }
    // sort(a.begin(),a.end());
    // for(int i=0;i<n;i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
    // auto it=lower_bound(a.begin(),a.end(),5);  // lower_bound(start add,end add +1,element);
    // // int *ptr2=upper_bound(a,a+n,5);
    // if(it==a.end()){
    //     cout<<"Not found";
    //     return 0;
    // }
    // cout<<*it<<endl;
    // return 0;


    // int n;
    // cin>>n;
    // set<int> s;
    // for(int i=0;i<n;++i)
    // {
    //     int x;
    //     cin>>x;
    //     s.insert(x);
    // }
    // // auto it=lower_bound(s.begin(),s.end(),5);//it is advised not to use this 
    //     //0(n)
    //     auto it=s.lower_bound(5); //ln(n)
    // cout<<(*it)<<endl;
    // return 0;


    int n;
    cin>>n;
    map<int,int> m;/*map ka case ma lower_bound() aur upperbound() sirf key ka upar lagta hai*/
    for(int i=0;i<n;++i)
    {
        int x;
        int y;

        cin>>x>>y;
        m[x]=y;
    }
    
    auto it=m.lower_bound(5);// advised to use this.
    cout<<(*it).first<<" "<<(it->second)<<endl;
    return 0;




}

