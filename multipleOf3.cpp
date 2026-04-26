#include<iostream>
using namespace std;

main()
{
    int num;
    cout<<" Enter the num you want to enters : ";
    cin>>num;
    int arr[num];
    cout<<" Now Enter numbers : "<<endl;
    
    for(int i =0; i<num; i++)
    {
        cin>>arr[i];
    }
    int largest = arr[0];
    for(int i =0; i < num; i++)
    {
        if(arr[i]>largest)
        {
            largest = arr[i];
        }
    }
    int largest2 = arr[1];
    for(int i = 0; i< num; i++)
    {
        if(arr[i] > largest2 && arr[i] < largest )
        {
            largest2 = arr[i];
        }
    }
    int largest3 = arr[2];
    for(int i = 0; i< num; i++)
    {
        if(arr[i] > largest3 && arr[i] < largest2 && arr[i] < largest )
        {
            largest3 = arr[i];
        }
    }
    cout<<largest <<" " <<largest2 <<" " <<largest3<<endl;
   int mul = (largest * largest2) * largest3;
    cout<<mul;
}