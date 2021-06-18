#include<iostream>
#include<vector>
using namespace std;
vector<int> NGT(vector<int>  v)
{
    for(int i=0;i<v.size();i++)
    {
        int flag=0;
        for(int j=i+1;j<v.size();j++)
        {
            flag=0;
            if(v[i]<v[j]) {
                v[i] = v[j];
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            v[i]=-1;
        }
    }
    return v;
}
void printvec(vector<int> &v)
{
    for(auto i :v)
        cout<<i<<" ";
    cout<<endl;
}
int main()
{
    cout<<"Enter no. of Elements u want to take\n";
    int n;
    cin>>n;
    vector<int> v;
    cout<<"Enter elements\n";
    while(n--)
    {
        int element;
        cin>>element;
        v.push_back(element);
    }
    vector<int> nv;
    nv=NGT(v);
    printvec(nv);

    return 0;
}
