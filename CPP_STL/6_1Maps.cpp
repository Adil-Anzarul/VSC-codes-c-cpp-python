/*
1. Map is a data structure that stores key value pair
2. We can't use it+1 on map we can use it++ ,where it is iterator
   because map is in discontineous memory location.
3. Map stores values in sorted order.
4. Map's keys are unique 
  m[1]="abc";
  m[1]="hgf";
  it will simply replace the value 
*/
#include <bits/stdc++.h>
using namespace std;
void print(map<int, string> &m)
{
    cout << m.size() << endl;
    for (auto &pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }
}

void print1(map<int, int> &m)
{
    cout << m.size() << endl;
    for (auto &pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }
}
int main()
{
    map<int, string> m;
    m[1] = "Adil";
    m[5] = "Anzarul";
    m[3] = "Imran";
    m.insert({4, "Arbaj"});
    // m[6]; //by default empty string is stored in value
    // map<int, string>::iterator it;
    //    for(it=m.begin();it!=m.end();++it)
    //     {
    //         cout<<(*it).first<<" "<<(*it).second<<endl;
    //     }
    //     for(auto  &pr: m)
    //     {
    //         cout<<pr.first<<" "<<pr.second<<endl;
    // print(m);

    // auto it1=m.find(3);/*it will return iterator corresponding to 3 and if 3 is not 
    //             present then it will return iterator to .end()*/
    // if(it1==m.end())
    // {
    //     cout<<"NO VALUE FOUND\n";
    // }
    // else
    // {
    //     cout<<(*it1).first<<" "<<(*it1).second<<endl;
    // }


    // m.erase(3);/*It takes key or iterator as argument */
    // map<int, string>::iterator iter=m.begin();
    // m.erase(iter);

    auto a=m.find(1);
    if(a!=m.end())
     m.erase(a);
    print(m);

    m.clear();//it clears the map
    // map<int,int> m1;
    // print1(m1);
    // m1[1]; //default value of int is 0(stored in value)
    // print1(m1);
    //     }
    
    return 0;
}
