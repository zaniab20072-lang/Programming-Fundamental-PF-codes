#include<iostream>
using namespace std;

main()
{
    int n;
    cout<<" Enter a number : ";
    cin>>n;
    if( n <= 0)
    {
        cout<<" Invaild number. It must be greater than 0. ";
    }
    int arr[n];
    cout<<" Enter " <<n <<" number. One per line . "<<endl;
    for( int i = 0; i < n; i++ )
    {
        cin>> arr[i];
    }
    cout<<" Number in reverse order : "<<endl;
    for( int i = n-1; i >= 0; i-- )
    {
        cout<< arr[i];
    }
    cout<<endl;
}