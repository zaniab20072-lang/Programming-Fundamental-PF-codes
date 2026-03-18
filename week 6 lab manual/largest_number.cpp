#include<iostream>
using namespace std;

main()
{
    int n;
    cout<<" Enter number : ";
    cin>>n;
     
    int arr[n];
    cout<<" Enter "<<n <<" number per line : "<<endl;
    for(int i = 0; i < n; i++ )
    {
        cin>>arr[i];
    }
    int largest = arr[0];
    for(int i = 1; i < n; i++) 
    { 
        if(arr[i] > largest) 
        {
            largest = arr[i];
        }
    }
    cout<<" largest number : "<<largest;
}