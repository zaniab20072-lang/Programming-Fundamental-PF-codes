#include<iostream>
using namespace std;

void rotate(int arr[], int size, int n);

int main()
{
    int n;
    int arr[] = {1,2,3};
    int size = 3;

    cout<<"Enter how many times you want to rotate array: ";
    cin>>n;

    rotate(arr, size, n);

    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}

void rotate(int arr[], int size, int n)
{
    for(int i=0; i<n; i++)
    {
        int first = arr[0];

        for(int j=0; j<size-1; j++)
        {
            arr[j] = arr[j+1];
        }

        arr[size-1] = first;
    }
}
// ab jo reverse wala ha usko is trh krna 
for(int i=0; i<size/2; i++)
{
    for(int j=size-1-i; j==size-1-i; j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

