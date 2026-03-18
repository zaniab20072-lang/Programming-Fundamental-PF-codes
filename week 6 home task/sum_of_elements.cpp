#include<iostream>
using namespace std;

main()
{
    int num, sum =0;
    cout<<" Enter number of elements : ";
    cin>>num;
    int number[num];

    cout<<" Enter " <<num <<" numbers : "<<endl;
    for( int count = 0; count < num; count++ )
    {
        cin>>number[count];
        sum = sum + number[count];
    }

    cout<<" Sum : " <<sum <<endl;
}
