#include<iostream>
using namespace std;

main()
{
    int num;
    cout<<" Enter num: ";
    cin>>num;
    int arr[num];
    for(int i =0; i < num; i++ )
    {
        cin>>arr[i];
    }
    int j =0;
    for(int i =0; i < num; i++)
    {
        if(arr[i] != 0 )
        {
            arr[j] = arr[i];
            j++;
        }
    }
    for( int i = j; i<num; i++ )
    {
        arr[i] = 0;
    }
    cout<<" {";
    for(int i =0; i<num; i++)
    {
        cout<<arr[i] <<", ";
    }
    cout<<" }";
}