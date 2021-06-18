#include<bits/stdc++.h>
using namespace std;
void print(set<string> &s){
    for(string value:s)
    {
        cout<<value<<endl;
    }

    // for(auto it=s.begin();it!=s.end();it++)
    // {
    //     cout<<(*it)<<endl;
    // }
}

void print1(unordered_set<string> &s){
    for(string value:s)
    {
        cout<<value<<endl;
    }
}

void print2(multiset<string> &s){
    for(string value:s)
    {
        cout<<value<<endl;
    }
}


int main()
{
    // set<string> s;
    // s.insert("abc");
    // s.insert("zsdf");
    // s.insert("bcd");
    // s.insert("abc"); /* it inserts unique elements*/
    // // auto it=s.find("abc");  // .find() returns iterator to that element.
    // // if(it!=s.end())
    // // {
    // //     // cout<<(*it);
    // //     s.erase(it);
    // // }  
    // s.erase("abc");

    // print(s);


// unordered_set<string> s1;
//     s1.insert("abc");
//     s1.insert("zsdf");
//     s1.insert("bcd");
//     s1.insert("abc");
//     // auto it=s1.find("abc");
//     // if(it!=s1.end())
//     // {
//     //     // cout<<(*it);
//     //     s1.erase(it);
//     // }  
//     s1.erase("abc");
//     print1(s1);


multiset<string> s2;//in multiset duplicates are allowed.
    s2.insert("abc");
    s2.insert("zsdf");
    s2.insert("bcd");
    s2.insert("abc"); 
    auto it=s2.find("abc"); //.find() returns the iterator corresponding to 
                            // first element(if duplicates are present)
    if(it!=s2.end())
    {
        
        s2.erase(it);//erase only that one elements(duplicates will not be affected)
    }  
    
    // s2.erase("abc"); // erase all "abc"

    print2(s2);


    return 0;
}