/*
all_of
none_of
any_of

returns true or false
*/
/*
lambda function

[](argument){code}(pass argument)
*/

#include<bits/stdc++.h>
using namespace std;

bool is_positive(int x){
    return x>0;
}
int main()
{
    // cout<<[](int x){return x+2;}(4)<<endl;
    // cout<<[](int x,int y){return x+y;}(4,11)<<endl;

    // auto sum=[](int x,int y){return x+y;};
    // cout<<sum(2,3);

    // vector<int> v={2,-1,-4};
    // // cout<<all_of(v.begin(),v.end(),[](int  x){return x>0;})<<endl;
    // // cout<<all_of(v.begin(),v.end(),is_positive);

    // cout<<any_of(v.begin(),v.end(),[](int  x){return x>0;})<<endl;
    // cout<<none_of(v.begin(),v.end(),[](int  x){return x>0;})<<endl;

    vector<int> vec={4,8,6,5,74};
    cout<<all_of(vec.begin(),vec.end(),[](int x){return (x%2)==0;})<<endl;

    int arr[]={1,2,3,4,-5};
    cout<<all_of(arr,arr+5,[](int x){ return (x>0);})<<endl;
    return 0;
}