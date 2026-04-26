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
    int count=0;
    for(int i =0; i < num; i++)
    {
       if(arr[i] == 1)
       {
        count++;
       }
    }
    cout<<" ones are : "<<count;
}