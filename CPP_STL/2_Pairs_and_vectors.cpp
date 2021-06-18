#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v)
{
    cout<<"Size :  "<<v.size()<<endl;
    for (int i =0; i < v.size(); ++i)
    {
        cout<<v[i]<<"  ";
    }
    v.push_back(2);
    cout<<endl;
}

int main()
{
    /*
    pair<int,string> p;
    // p=make_pair(2,"abc"); //To input value in pair.
    p={3,"abcd"};//To input value in pair.
    cout<<p.first<<"  "<<p.second<<endl;
    // pair<int,string> p1=p; //copy
    pair<int,string> &p1=p;
    p1.first=44;
    cout<<p.first<<"  "<<p.second<<endl;


    pair<int,int> p_array[3];// array of pair
    p_array[0]={1,2};
    p_array[1]={2,3};
    p_array[2]={3,4};
    swap(p_array[0],p_array[2]);
    for (int i =0; i < 3; i++)
    {
        cout<<p_array[i].first<<"  "<<p_array[i].second<<endl;
    }
    */

//    pair<int,int> pin;
//    cin>>pin.first;
//    cin>>pin.second;
//    cout<<pin.first<<"  "<<pin.second<<"\n";

////VECTOR -Array of Dynamic Size

// vector<int> v;//vector of zero size
// int n;
// cin>>n;
// for (int i = 0; i < n; i++)
// {
//     int x;
//     cin>>x;
//     v.push_back(x);//add to end
// }
// printVec(v);
 vector<int> v1(5,8);
 v1.push_back(4);
 printVec(v1);
 printVec(v1);
 v1.pop_back();//removes  last element
 printVec(v1);
 vector<int> v2=v1;//copy
 v2.push_back(5);
 printVec(v2);
    return 0;
}

