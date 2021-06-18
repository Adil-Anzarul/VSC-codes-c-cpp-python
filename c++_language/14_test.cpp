#include<iostream>
using namespace std;

enum a1{val1,val2,val3/*=15*/,val5};
enum month{jan,
           feb,
           march,
           april,
           may,
           june,
           july,
           aug,
           sept,
           oct,
           nov,
           decm};
int main()
{
     a1 g,y,x;
     g=val5;
     y=val3;
    //  x=0  it will show error;
     cout<<g<<endl<<y<<endl;


     for (int i = jan; i <=decm ; i++)
     {
         cout<<i<<"\n";
     }
     
    return 0;


/*


*/
}



