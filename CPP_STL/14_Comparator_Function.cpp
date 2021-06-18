#include <bits/stdc++.h>
using namespace std;
// bool shoud_i_swap(int a, int b) //Compaator fxn. ----it defines behaviour of sorting algorithm
// {
//     if (a < b)
//         return true;
//     return false;
// }
// bool shoud_i_swap(pair<int, int> a, pair<int, int> b)
// {
//     // if (a < b)
//     //     return true;
//     // return false;
//     if (a.first != b.first)
//     {
//         if (a.first > b.first)
//             return true;
//         return false;
//     }
//     else
//     {
//         if (a.second < b.second)
//             return true;
//         return false;
//     }
// }


bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.first != b.first)
    {
        // if (a.first > b.first)
        //     return false;
        // return true;
        return a.first<b.first;   /*jo chiz chaia wahi return kar do*/
    }
    // else
    // {
    //     if (a.second < b.second)
    //         return false;
    //     return true;
    // }
    return a.second>b.second;
}

int main()
{
    // int n;
    // cin >> n;
    // vector<int> a(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a[i];
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j=i+1; j < n; j++)
    //     {
    //         if (shoud_i_swap(a[i],a[j]))
    //         {
    //             swap(a[i], a[j]);
    //         }
    //     }
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << " ";
    // }
    // cout << endl;

    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (shoud_i_swap(a[i], a[j]))
    //         {
    //             swap(a[i], a[j]);
    //         }
    //     }
    // }

sort(a.begin(),a.end(),cmp);  /*if u want to swap then return false  (ulta hai bhai inbuilt implementation)*/
/*
By default comperators----
greater<pair<int,int>>()----sort is decreacing order
*/

    for (int i = 0; i < n; i++)
    {
        cout << a[i].first << " " << a[i].second << endl;
    }
    cout << endl;
    return 0;

    
}
