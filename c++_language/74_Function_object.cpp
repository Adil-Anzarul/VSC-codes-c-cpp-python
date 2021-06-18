#include<iostream>
#include<functional>   //--->function_objects
#include<algorithm>
using namespace std;


int main(int argc, char const *argv[])
{
    //Function Object (Functor) : Function wrapped in a class so that it available 
    //like an object

    int arr[]={1,73,4,2,54,1};
    // sort(arr,arr+5);
    sort(arr,arr+5,greater<int>());
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}
