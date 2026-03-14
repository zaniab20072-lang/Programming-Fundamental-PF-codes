#include<iostream>
using namespace std;

main()
{
    int num, digit, count =0, res =0;
    cout<<" Enter a number : ";
    cin>>num;
    cout<<" Digit you want to check frequency : ";
    cin>>digit;

    for( num > 0; num = num / 10; )
    {
        res = num % 10 ;

        if( res == digit )
        {
            count = count + 1;
        }
    }
    cout<<" The Frequency is : "<<count;
}