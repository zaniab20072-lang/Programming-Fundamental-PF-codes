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
    int j =0;
    for(int i =1; i < n; i++)
    {
        if(arr[i] != arr[j])
        {
            j++;
            arr[j] = arr[i];
        }
    }
     for(int i = 0; i <= j; i++)
    {
        cout << arr[i] << " ";
    }
}