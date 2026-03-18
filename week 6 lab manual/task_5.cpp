#include<iostream>
using namespace std;

main()
{
    int n;
    cout<<" Enter number you want to add in array : ";
    cin>>n;
    
    int number[n];

    for( int count = 0; count < n; count++ )
    {
        cout<<" Enter a number : ";
        cin>>number[count];
    }
}