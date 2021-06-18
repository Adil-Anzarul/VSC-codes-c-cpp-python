#include <bits/stdc++.h>
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
    // /*
    // sort(adderess of starting element,address next to address of end element );
    // */
    // for(int i=0;i<n;i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;

    int n1;
    cin >> n1;
    vector<int> a1(n1);
    for (int i = 0; i < n1; i++)
    {
        cin >> a1[i];
    }
    // sort(&(a1[0]),&(a1[n1-1])+1);
    sort(a1.begin(), a1.end());
    for (int i = 0; i < n1; i++)
    {
        cout << a1[i] << " ";
    }
    cout << endl;

    return 0;
}