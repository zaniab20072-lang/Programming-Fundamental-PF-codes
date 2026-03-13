#include<iostream>
using namespace std;

main()
{
    int number, digit, count = 0, res = 0;
    cout<<" Enter number : ";
    cin>>number;
    cout<<" Digit whose frequency you want to check : ";
    cin>>digit;
    
    for( number > 0; number = number / 10; ){
        res = number % 10;

        if( res == digit ){
            count = count + 1 ; 
        }
    }
    cout<<" The Frequency check of the given number is : "<<count <<endl;  
}