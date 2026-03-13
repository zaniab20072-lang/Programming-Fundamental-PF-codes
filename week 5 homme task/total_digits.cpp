#include<iostream>
using namespace std;

main()
{
    int num, count =0;
    cout<<" Enter a number : ";
    cin>>num;

    for( int i = num; i > 0; i = i/10 )
    {
        count = count + 1 ;
    }
    cout<<" Total number of digits : "<<count;
}