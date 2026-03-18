#include<iostream>
using namespace std;

main()
{
    int num, even =0;
    cout<<" Enter number of elements : ";
    cin>>num;
    int number[num];

    cout<<" Enter " <<num <<" numbers : "<<endl;
    for( int count = 0; count < num; count++ )
    {
        cin>>number[count];
        if( number[count] % 2 == 0 )
        {
           even++;
        }
    }
    cout<<" Total Even numbers are : "<<even;
}
