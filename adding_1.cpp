#include<iostream>
using namespace std;

main()
{
    int n;
    cout<<" Enter the n : ";
    cin>>n;
    int arr[n];
    for(int i =0; i < n; i++)
    {
        cin>>arr[i];
    }
    int carry =1;
    for(int i = n - 1; i >= 0; i--)
    {
        int sum = arr[i] + carry;

        arr[i] = sum % 10;
        carry = sum / 10;
    }
    for(int i =0; i < n; i++)
    {
        cout<<arr[i];
    }
}