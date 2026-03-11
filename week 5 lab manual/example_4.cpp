#include<iostream>
using namespace std;

main()
{
    int n, digits, count = 0;
    cout<<" Enter number : ";
    cin>>n;

    for( int i = n; i > 0; i = i/10 ){
       count = count + 1;
    }
    digits = count;
    cout<<" Total number of digits : "<<digits; 
}