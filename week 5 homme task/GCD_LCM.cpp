#include<iostream>
using namespace std;

main()
{
    int gcd = 0, lcm = 0;
    int a, b;
    cout<<" Enter 1st number : ";
    cin>>a;
    cout<<" Enter second number : ";
    cin>>b;
    
    int reminder, c, d;
    c = a; d = b;
    while( d != 0 )
    {
        reminder = c % d ;
        c = d;
        d = reminder;
        
        gcd = c;
    }
    cout<<" GCD : "<<gcd<<endl;

    lcm = ( a * b ) / gcd ;
    cout<<" LCM : "<<lcm;
}