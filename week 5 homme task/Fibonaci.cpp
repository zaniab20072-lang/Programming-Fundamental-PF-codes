#include<iostream>
using namespace std;

main()
{
    int a =0, b =1, next =0;
    int num;
    cout<<" Enter a number of fibonaci serries : ";
    cin>>num;
    if( num == 1 )
        {
            cout<<a ;
        }
        if( num == 2 || num > 2 )
        {
            cout<<a <<" , " <<b;
        }
    for( int i = 1; i <= num-2 ; i++ )
    {
         next = a + b ;
        cout<<" , "<<next;
        a = b;
        b = next ;
    }
}